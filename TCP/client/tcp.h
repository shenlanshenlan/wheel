/* 
*  This is a simple TCP protocol client 
*/
#include <string>
#include <iostream>
namespace TCP{

class TCP_C {
  public:
      TCP_C(std::string hostname,std::string service);
      ~TCP_C();
      int Send(void *,int len);
      int Recv(void *,int len);
  private:
      int socket_fd;
 };
}// namespace end
