#include "Admin.h"
#include "Employee.h"
#include "Category.h"
#include<iostream>
#include <string>
#define SIZE 2


using namespace std; 
// Default constructor
Administrator::Administrator() 
{ 

   empID = 0;
   name= "";
   address= "";
   email= "";
   mobile="";
   nic="";
 
   
} 

// Overload constructor
Administrator::Administrator(int adid, string adnic, string adname, string adaddress, 
  string ademail, string admobile ) 
{ 

  
 empID=adid;
 nic=adnic;  
 name=adname;
 address=adaddress;
 email=ademail;
 mobile=admobile;

 
}

void Administrator:: displayDetails()// Method
{ 
 
  cout << "Admin ID : " << empID<< endl;
  cout << "Admin NIC : " << nic<< endl;
  cout << "Admin Name : " << name << endl;
  cout << "Admin address : " << address << endl;
  cout << "Admin email : " << email << endl;
  cout << "Admin mobile : " << mobile << endl<< endl;

  
}
void Administrator:: addCategory(Category *cat1)
{  
  cat[0]=cat1;
}