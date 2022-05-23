#include "Recipe.h"
#include <iostream>
#include<string>
using namespace std;

void Recipe::DisplayRecipe()
{
	cout<< endl<<"Recipe ID : " << recipeID<<endl;
	cout << "Recipe Title : " << recipetitle<<endl;
	cout << "Recipe Description : " << recipeDescription<<endl;
	cout << "Recipe Duration : " << recipeDuration<<endl;
	cout << "Category ID : " <<cat->getCategoryID()<<endl;
	cout << "Category Name : " <<cat->getCategoryName()<<endl<<endl;
}

Recipe::Recipe()
{
	recipeID = 0;
	recipetitle = "";
	recipeDescription = "";
	recipeDuration = "";
}

Recipe::Recipe(int rid,string rtitle,string rdescription, string rDuration,Category *c )
{
	recipeID = rid;
	recipetitle = rtitle;
	recipeDescription = rdescription;
	recipeDuration = rDuration;
	cat = c;
}

Recipe::~Recipe()
{
  cout<<"Recipe is deleted"<<endl;
}
