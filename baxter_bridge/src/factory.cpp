#include <baxter_bridge/factory.h>
#include <baxter_bridge/bridge.h>
#include <algorithm>


namespace baxter_bridge
{

std::vector<std::unique_ptr<Bridge>> Factory::bridges;

void Factory::createRemainingBridges()
{
  // work on backups as createBridge erases topics_*to*
  const auto remaining{[](){
    std::vector<std::string> out;
    for(const auto &rem: {topics_1to2, topics_2to1})
      std::transform(rem.begin(), rem.end(), std::back_inserter(out),
                     [](const auto &elem){return elem.first;});
    return out;
  }()};

  for(const auto &topic: remaining)
    createBridge(topic);
}

void Factory::createBridge(const std::string &topic)
{
  if(const auto bridge = topics_1to2.find(topic);bridge != topics_1to2.end())
  {
    const auto msg{topics_1to2[topic]};
    topics_1to2.erase(bridge);
    RCLCPP_INFO(Bridge::ros2()->get_logger(), "Creating bridge 1->2 " + topic);
    createBridge_1to2(topic, msg);
  }
  else if(const auto bridge = topics_2to1.find(topic);bridge != topics_2to1.end())
  {
    const auto msg{topics_2to1[topic]};
    topics_2to1.erase(bridge);
    RCLCPP_INFO(Bridge::ros2()->get_logger(), "Creating bridge 2->1 " + topic);
    createBridge_2to1(topic, msg);
  }
}
}
