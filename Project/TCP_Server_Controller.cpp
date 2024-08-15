#include <stdio.h>
#include <assert.h>
#include "TCP_Server_Controller_header.h"
#include "network_utils.h"

TCP_Server_Controller:: TCP_Server_Controller (std:: string ip_addr, uint16_t port_no, std:: string name){
    this->ip_addr = network_convert_ip_p_to_n(ip_addr.c_str());
}


