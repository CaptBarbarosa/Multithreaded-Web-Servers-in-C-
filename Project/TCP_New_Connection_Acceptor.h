#ifndef TCP_New_Connection_Acceptor
#define TCP_New_Connection_Acceptor.h

class TCP_Server_Controller;


class TCP_New_Connection_Acceptor{
    private:

    public:
        TCP_Server_Controller *tcp_ctrl;
        TCP_New_Connection_Acceptor();
        ~TCP_New_Connection_Acceptor(TCP_Server_Controller *);

};

#endif
