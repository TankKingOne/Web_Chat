#include "IMServer.hpp"

int main()
{
  //MysqlClient *mc = new MysqlClient();
  //mc->ConnectMysql();
  //mc->InsertUser("六哈哈号", "321");
  //delete mc;
  IMServer *im = new IMServer();
  im->InitServer();
  im->Start();
  return 0;
}
