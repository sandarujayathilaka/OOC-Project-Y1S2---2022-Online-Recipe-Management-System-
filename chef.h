#include"Employee.h"
#include<string>
#include "Appointment.h"
#define SIZE1 2
using namespace std;



class chef:public Employee 
{
   private:
       int chefId;
       Appointment * ap [SIZE1];


   public: 
       chef();
       chef(int cId);
       void approveappoinment(Appointment * ap1,Appointment * ap2);
       void addchefdetails() ;  
       

};