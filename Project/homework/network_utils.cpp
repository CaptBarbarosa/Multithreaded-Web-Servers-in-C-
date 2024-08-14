#include "network_utils.h"
#include <cstdio>   // for sprintf
#include <cstring>  // for strtok
#include <cstdlib>  // for atoi

char *network_convert_ip_n_to_p(uint32_t ip_addr, char *output_buffer) {
    // Convert the IP address to A.B.C.D format
    static char static_buffer[16]; // static buffer for the case where output_buffer is NULL
    
    if (output_buffer == NULL) {
        output_buffer = static_buffer;
    }

    sprintf(output_buffer, "%u.%u.%u.%u",
            (ip_addr >> 24) & 0xFF,  // First octet
            (ip_addr >> 16) & 0xFF,  // Second octet
            (ip_addr >> 8) & 0xFF,   // Third octet
            ip_addr & 0xFF);         // Fourth octet

    return output_buffer;
}

uint32_t network_convert_ip_p_to_n(const char *ip_addr) {
    uint32_t result = 0;
    int octet;
    char *token;
    char ip_copy[16];

    // Copy the IP address to a local buffer since strtok modifies the string
    strncpy(ip_copy, ip_addr, sizeof(ip_copy));
    ip_copy[sizeof(ip_copy) - 1] = '\0';

    // Split the IP address by '.' and convert each part to an integer
    token = strtok(ip_copy, ".");
    for (int i = 0; i < 4 && token != NULL; ++i) {
        octet = atoi(token);
        result |= (octet << (24 - 8 * i));
        token = strtok(NULL, ".");
    }

    return result;
}

