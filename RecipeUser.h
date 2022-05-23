#pragma once
#define SIZE 2
#include "Appointment.h"
#include "Recipe.h"
#include "status.h"

class RecipeUser
{
private:

	string name;
	int age;
	string userid;
	string email;
	Recipe* rec[SIZE];
  Appointment* appointment;
  status * stat;
  
public:

	void addRecipe(Recipe *rec1,Recipe *rec2);
	void makeAppointment();
	void displayDetails();
	RecipeUser();
	RecipeUser (string uname, int rage,string ruserid,string uemail,status* comment);
	~RecipeUser();

};

