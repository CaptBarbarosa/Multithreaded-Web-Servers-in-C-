#include "network_utils.h"
#include <cstdio>   // for sprintf
#include <cstring>  // for strtok
#include <cstdlib>  // for atoi

char *network_convert_ip_n_to_p(uint32_t ip_addr, char *output_buffer) {
    static char static_buffer[16]; 
    if (output_buffer == NULL) {
        output_buffer = static_buffer;
    }
    sprintf(output_buffer, "%u.%u.%u.%u", 
            (ip_addr >> 24) & 0xFF, 
            (ip_addr >> 16) & 0xFF,
            (ip_addr >> 8) & 0xFF,
            ip_addr & 0xFF);
    return output_buffer;
}
uint32_t network_convert_ip_p_to_n(const char *ip_addr) {
    uint32_t result = 0;
    int octet;
    char *token;
    char ip_copy[16];
    strncpy(ip_copy, ip_addr, sizeof(ip_copy));
    ip_copy[sizeof(ip_copy) - 1] = '\0';
    token = strtok(ip_copy, ".");
    for (int i = 0; i < 4 && token != NULL; ++i) {
        octet = atoi(token);
        result |= (octet << (24 - 8 * i));
        token = strtok(NULL, ".");
    }
    return result;
}

