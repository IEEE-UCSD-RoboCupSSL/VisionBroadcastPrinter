#include <iostream>
#include <string>
#include "messages_robocup_ssl_detection.pb.h"
#include "messages_robocup_ssl_geometry.pb.h"
#include "messages_robocup_ssl_refbox_log.pb.h"
#include "messages_robocup_ssl_robot_status.pb.h"
#include "messages_robocup_ssl_wrapper.pb.h"

#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/thread/thread.hpp>
#include <boost/array.hpp>

#define DURATION_MILLIS_COUNT(time_point) std::chrono::duration_cast<std::chrono::milliseconds> (time_point).count()


using namespace boost;
using namespace boost::asio;


int port = 10020;
std::string ipAddr = "224.5.23.2";


//void printDetection(SSL_WrapperPacket wrapper) {
//    wrapper.
//}


int main(int argc, char *argv[]) {
    int mode = 0;
    const int detection = 0, geometry = 1;
    if(std::string(argv[1]) == "detection") mode = detection;
    if(std::string(argv[1]) == "geometry")  mode = geometry;
     
    SSL_WrapperPacket wrapper;

    const auto period = std::chrono::milliseconds(50);
    auto t0 = std::chrono::steady_clock::now();


    io_service ios;
    ip::udp::endpoint ep(ip::address::from_string(ipAddr), port);
    
    auto receive_buffer = boost::array<char, 1024>();
    auto socket = ip::udp::socket(ios);

    socket.open(ep.protocol());
    socket.set_option(ip::udp::socket::reuse_address(true));
    socket.bind(ep);
    socket.set_option(ip::multicast::join_group(ep.address()));

    
    size_t packetSize;
    std::string packetString;

    while(true) {
        auto t = std::chrono::steady_clock::now(); 

        packetSize = socket.receive_from(asio::buffer(receive_buffer), ep);
        packetString = std::string(receive_buffer.begin(), receive_buffer.begin() + packetSize);
        // std::cout << packetString << std::endl;
        wrapper.ParseFromString(packetString);
        if(mode == detection) {
            std::cout << wrapper.detection().DebugString() << std::endl;
        }

        std::this_thread::sleep_until(t + period);
    }



    return 0;
}