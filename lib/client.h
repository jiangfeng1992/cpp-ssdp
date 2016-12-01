//
// Created by Lasse Lauritsen on 28/03/16.
//

#ifndef CPP_SSDP_CLIENT_H
#define CPP_SSDP_CLIENT_H
#include <boost/asio.hpp>
#include "udp_listener.h"
#include "discovery_broadcaster.h"
#include "parser.h"

class client {
public:
    client();
    void broadcast_disover_all();
private:

    boost::asio::io_service io_service_;
    boost::asio::ip::address listen_addr_;
    boost::asio::ip::address multicast_addr_;
    std::unique_ptr<udp_listener> udp_listner_;
    std::unique_ptr<discovery_broadcaster> discovery_bcaster_;
    std::shared_ptr<parser> parser_;
};


#endif //CPP_SSDP_CLIENT_H
