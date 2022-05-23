#include "chef.h"
#include "Employee.h"
#include "Appointment.h"
#include<iostream>
#include <string>

using namespace std; 

chef::chef() 
{ 

 int chefId = 0;
   
} 

chef::chef(int cid) 
{ 

 chefId = cid;
   
} 



void chef::approveappoinment(Appointment * ap1,Appointment * ap2)
{
  ap[0] = ap1;
  ap[1] = ap2;
}


void chef::addchefdetails()
{
  
}

