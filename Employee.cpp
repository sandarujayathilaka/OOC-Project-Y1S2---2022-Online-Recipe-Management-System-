#include "Employee.h"
#include<iostream>
#include <string>
using namespace std;


Employee::Employee()
{
 empID = 0;
 name= "";
 address= "";
 email= "";
 mobile= "";
}

Employee::Employee(int eid, string ename, string eaddress,  
    string eemail, string emobile)  
{

 empID=eid; 
 name=ename;
 address=eaddress;
 email=eemail;
 mobile=emobile;
  
}

void Employee:: displayDetails()
{ 

  cout << "Employee ID : " << empID << endl;
  cout << "Employee Name : " << name<< endl;
  cout << "Employee address : " << address << endl;
  cout << "Employee email : " << email << endl;
  cout << "Employee mobile : " << mobile << endl<< endl;

}
Employee::~Employee() 
{
cout <<"Employee Deleted"<<endl;
} 