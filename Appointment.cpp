#include "Appointment.h"
#include <iostream>
#include<string>
using namespace std;


Appointment::Appointment()
{
	appointmentID = 0;
	date = "";
	time = "";
	description = "";
}

Appointment::Appointment(int AppiD,string Appdate,string Apptime, string Appdescription )
{
	 appointmentID =AppiD;
	date = Appdate;
	time = Apptime;
	description = Appdescription;
	
}

void Appointment::displayDetails()
{
	cout<< endl<<"Appointment ID : " << appointmentID<<endl;
	cout << "Appointment Date : " << date<<endl;
	cout << "Appointment Time : " << time<<endl;
	cout << "Appointment Duration : " << description<<endl;
	
}

  Appointment::~Appointment(){

    cout<<"Appointment Deleted"<<endl;
  };