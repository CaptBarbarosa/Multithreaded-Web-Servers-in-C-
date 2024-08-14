#ifndef SERVER_CONTROLLER_HEADER
#define SERVER_CONTROLLER_HEADER

#include <stdint.h>
#include <string>

using namespace std;


class TCP_Server_Controller{
    private:
        TCP_New_Connection_Acceptor *tcp_new_conn_acc;
        TCP_Client_DB_Manager *tcp_client_db_mgr;
        TCP_Client_Service_Manager *tcp_client_svc_mgr;

    public:
        uint32_t ip_addr;
        uint16_t port_no;
        string name;

        TCP_Server_Controller(string ip_addr, uint32_t port_no, string name);
        ~TCD_Server_Controller();
        void start();
        void stop();
};


#endif
