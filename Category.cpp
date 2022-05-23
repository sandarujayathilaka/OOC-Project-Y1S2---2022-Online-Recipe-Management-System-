#include "Category.h"
#include <iostream>
#include<string>
using namespace std;

void Category::dispalyCategory()
{

	cout <<endl<< "Category ID : " << categoryID << endl;
	cout <<"Category Name : " << CategoryName << endl<<endl;

}

Category::Category()
{
	categoryID = 0;
	CategoryName = "";
}

Category::Category(int cid,string cname)
{
	categoryID = cid;
	CategoryName=cname;

}

int Category::getCategoryID()
{
	return categoryID;
}

string Category::getCategoryName()
{
	return CategoryName;
}

Category::~Category()
{
	cout <<endl<<endl<< "Category Deleted"<<endl;
}
