#include "Recipe.h"
#include "RecipeUser.h"
#include "Employee.h"
#include "Admin.h"
#include "Category.h"
#include "status.h"
#include "Appointment.h" 
#include "Nutritionist.h"
#include "Advertisement.h"
#include "AdOfficer.h"
#include "chef.h" 
using namespace std;

int main()
{
    
    Category* cat1;

    cat1 = new Category(123,"Vegetarian");
    cat1->dispalyCategory();

    Category* cat2;

    cat2 = new Category(144,"non-Vege");
    cat2->dispalyCategory();

    status *status1 =new status(121,"2021/10/21","Approved Recipe User");
   
   
    RecipeUser* user1;

    user1 = new RecipeUser("Sahan Jayathilaka", 25, "FD001145", "sahan@gmail.com",status1);
    user1->displayDetails();
    

    Recipe* recipe1;

    recipe1 = new Recipe(111, "Sambol", "description", "30 Min", cat1);
    recipe1->DisplayRecipe();

   Recipe* recipe2;

    recipe2 = new Recipe(121, "Fish", "description", "45 Min", cat2);
    recipe2->DisplayRecipe();

    user1->addRecipe(recipe1,recipe2);


    Administrator* admin1;

    admin1 = new Administrator(101, "981010010V", "Sam Perera", "Colombo 10", "Perera@gmail.com","0777 900900");
    admin1->displayDetails();


    Employee *emp1;
    emp1= new Employee(105, "Kasun", "Galle", "Kasun@gmail.com", "0777 900901");

    emp1-> displayDetails();


Appointment *app1;
    app1= new Appointment(3013, "22/05.2022", "10.30 AM", "Need Instruction");

    app1-> displayDetails();

  
  Nutritionist *Nut1;
    Nut1= new Nutritionist("199933118845", "Male","Kamal","Kamal634gmail.com","071-6572551","NO:25,Colombo Rd,Malabe",1364);

    Nut1-> displayDetails();
    cout<<"Gender :"<<Nut1->getgender()<<endl<<"NIC :"<<Nut1->getNIC()<<endl<<endl;

  
  Advertisement *ad1;
   ad1 = new Advertisement(2200);
  
   ad1 -> DisplayDetails();
  

  AdOfficer * officer;

  officer = new AdOfficer("Amal","Amal1234gmail.com","071-6579851","NO:45,Colombo Rd,piliyandala",1234);

  officer->displayDetails();
  
 
  
  
chef *che1;
  che1 = new chef(15242);

  che1 -> addchefdetails();


  status*sta1;
    sta1= new status(125314,"15/04/2022","Description");

    sta1-> Displaystatus();
  
    
    delete cat1;
    delete cat2;
    delete user1;
    delete recipe1;
    delete recipe2;
    delete admin1;
    delete che1;
    delete sta1;
    delete ad1;
    delete app1;
    delete Nut1;
    delete emp1;
    delete officer;
  
}

