#ifndef TCP_Client_Service_Manager
#define TCP_Client_Service_Manager


class TCP_Client;
class TCP_Server_Controller;

class TCP_Client_Service_Manager{
    private:
    public:
        TCP_Server_Controller *tcp_ctrl;
        TCP_Client_Service_Manager(TCP_Server_Controller *);
        ~TCP_Client_Service_Manager();
};

#endif
