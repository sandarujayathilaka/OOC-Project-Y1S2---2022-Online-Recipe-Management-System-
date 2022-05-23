#include "RecipeUser.h"
#include "status.h"
#include <iostream>
#include<string>

using namespace std;

void RecipeUser::addRecipe(Recipe* rec1,Recipe* rec2)
{
	rec[0] = rec1;
  rec[1] = rec2;

}

void RecipeUser::makeAppointment()
{
 
}

void RecipeUser::displayDetails()
{
	cout << "User Name : " << name << endl;
	cout << "Age : " << age << endl;
	cout << "User ID : " << userid << endl;
	cout << "Email : " << email << endl;
  cout<< "Status : " << stat->getstatus()<<endl;

}


RecipeUser::RecipeUser()
{
	name = "";
	age = 0;
	userid = "";
	email = "";
}

RecipeUser::RecipeUser(string uname, int rage,string ruserid,string uemail,status* comment)
{
	name = uname;
	age = rage;
	userid = ruserid;
	email = uemail;
  stat=comment;

}

RecipeUser::~RecipeUser()
{
	cout <<"RecipeUser Deleted"<<endl;
}
