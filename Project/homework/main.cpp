#include "network_utils.h"
#include <iostream>

int main(){
    char output_buffer[16];
    uint32_t ip_addr= 3232235777;
    char *returned = network_convert_ip_n_to_p(ip_addr, output_buffer);
    std:: cout << "Returned is: "<<returned << "\n\n";
    uint32_t char_to_uint = network_convert_ip_p_to_n(returned);
    std::cout << "Char to unit is: "<< char_to_uint << "\n\n";
    return 0;
}

