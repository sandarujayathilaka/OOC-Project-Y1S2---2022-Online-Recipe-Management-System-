#include <string>
using namespace std;
#pragma once



class Employee
{
  protected:
    int empID;
    string name;
    string address;
    string email;
    string mobile;
     

  public:  
    Employee();
    Employee(int eid,  string ename, string eaddress, string eemail,string emobile);
    void displayDetails();
    ~Employee();

};
