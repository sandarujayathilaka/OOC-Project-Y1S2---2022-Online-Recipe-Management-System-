#pragma once
#include "Category.h"
class Recipe
{
private:
	int recipeID;
	string recipetitle;
	string recipeDescription;
	string recipeDuration;
	Category* cat;

public:

	void DisplayRecipe();
	Recipe();
	Recipe(int rid,string rtitle,string rdescription,string rDuration,Category * c);
	~Recipe();
};