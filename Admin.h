#define SIZE 5
#include"Employee.h"
#include"Category.h"
#include<string>
using namespace std;
#pragma once


class Administrator :public Employee 
{
   protected:
       string nic;
       Category *cat[SIZE];

   public:
       Administrator();

       Administrator(int adid, string adnic, string adname, 
       string adaddress, string ademail, string admobile );

       void displayDetails();

       void addCategory(Category *cat1) ;

       
};