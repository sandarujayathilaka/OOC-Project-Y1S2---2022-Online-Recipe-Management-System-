#include<iostream>
#include"AdOfficer.h"
#include "Advertisement.h"
#include "Employee.h"

using namespace std;

AdOfficer::AdOfficer()
{
	int NIC=0;
}  

void AdOfficer::addAdvertisement(Advertisement * ad1,Advertisement * ad2)
{
	
}

void AdOfficer::deleteAdvertisement()
{
	cout<<endl<<"Advertisement officer's NIC:"<<NIC<<endl<<"Advertisement deleted";
}

void AdOfficer::updateAdvertisement()
{
	cout<<endl<<"Advertisement officer's NIC:"<<NIC<<endl<<"Advertisement updated";
  } 

AdOfficer::AdOfficer(string oname,string mail,string num,string adre,int id){

 empID=id; 
 name=oname;
 address=adre;
 email=mail;
 mobile=num;
    
 }

      

void AdOfficer::givedetails()
{
	
}

