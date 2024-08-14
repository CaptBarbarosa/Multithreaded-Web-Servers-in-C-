#ifndef TCP_Client_DB_Manager_Header
#define TCP_Client_DB_Manager_Header
#include<list>

class TCP_Client;
class TCP_Server_Controller;

class TCP_Client_DB_Manager{
    private:
        std::list<TCP_Client*>tcp_client_db;

    public:
        TCP_Server_Controller *tcp_ctrl;
        TCP_Client_DB_Manager(TCP_Server_Controller *);
        ~TCP_Client_DB_Manager();
};

#endif
