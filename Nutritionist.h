#include <string>
#include <iostream>
#include "Employee.h"
#define SIZE2 2
#include "Appointment.h"
using namespace std;
class Nutritionist : public Employee {

private:
  string NIC;
  string  gender;
  Appointment * app [SIZE2];

public:

 Nutritionist();
    Nutritionist(string nic, string gen,string oname,string mail,string num,string adre,int id);
    void approveAppointment(Appointment * app1,Appointment * app2);
	  void givedetails();
    string getNIC();
    string getgender();


};

