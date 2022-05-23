#pragma once
#include <string>
#include "RecipeUser.h"
using namespace std;



class Appointment
{
  private:
    int appointmentID;
    string date;
    string time;
    string description;
    RecipeUser * u1;

  public:
    Appointment();
    Appointment(int appointmentID, string date, string time, string description);
    void displayDetails();
    ~Appointment();

};
