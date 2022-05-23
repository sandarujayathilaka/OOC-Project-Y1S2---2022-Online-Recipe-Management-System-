#pragma once
#include<string>
using namespace std;


class status{
  private :
    int statusId;
    string statusDate;
    string description;

  public :
     status();
     status(int sid,string sdate,string des);
     void Displaystatus();
     string getstatus();
     void rankUser();
     ~status();
    

};