#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define PORT 8080

int main(int argc, char *argv[]){
    int server_socket;
    struct sockaddr_in server_address;
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if(server_socket<=0){
        perror("Failure at socket() function\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}




