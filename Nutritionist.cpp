#include "Nutritionist.h"
#include "Appointment.h"
#include <iostream>
#include<string>
using namespace std;

Nutritionist::Nutritionist()
{
	NIC="";
  gender="";
  
}

Nutritionist::Nutritionist(string nic, string gen,string oname,string mail,string num,string adre,int id)
{
NIC=nic;
gender = gen;
empID=id; 
name=oname;
address=adre;
email=mail;
mobile=num;
  
}

string Nutritionist::getNIC(){

   return NIC;
 }


string Nutritionist:: getgender(){
      return gender;
    }

void Nutritionist::approveAppointment(Appointment * app1,Appointment * app2)
{

  app[0]=app1;
  app[1]=app2;
	
}

void Nutritionist::givedetails()
{
	
}

