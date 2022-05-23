#include<iostream>
#include "Employee.h"
#include<string>
#include "Advertisement.h"
#define SIZE 2
using namespace std;

class AdOfficer: public Employee{
	
	private:
		
		int NIC;
    Advertisement * ad [SIZE];
		
	public:
		
		AdOfficer();
    AdOfficer(string oname,string mail,string num,string adre,int id);
		void addAdvertisement(Advertisement * ad1,Advertisement * ad2);
		void deleteAdvertisement();
		void updateAdvertisement();
		void givedetails();
		
	
};