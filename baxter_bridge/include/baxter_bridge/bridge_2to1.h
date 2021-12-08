#ifndef BAXTER_BRIDGE_2TO1_H
#define BAXTER_BRIDGE_2TO1_H

#include <baxter_bridge/bridge.h>
#include <baxter_bridge/conversions.h>

namespace baxter_bridge
{

template<class Msg1, class Msg2>
struct Bridge_2to1 : public Bridge
{
  Bridge_2to1(std::string topic)
  {
    pub = ros1()->advertise<Msg1>(topic, 10);
    sub = ros2()->create_subscription<Msg2>(topic, 10, [&](typename Msg2::SharedPtr msg2)
    {
      // ask monitor if we can publish there
      if(canPublishOn(pub.getTopic()))
      {
        Msg1 msg1;
        convertMsg(*msg2, msg1);
        pub.publish(msg1);
    }});
  }
private:
  ros::Publisher pub;
  typename rclcpp::Subscription<Msg2>::SharedPtr sub;
};

}
#endif