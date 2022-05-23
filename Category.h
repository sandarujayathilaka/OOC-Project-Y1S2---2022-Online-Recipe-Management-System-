#pragma once
#include<iostream>
using namespace std;
class Category
{
private:
	int categoryID;
	string CategoryName;

public:
	
	void dispalyCategory();
	Category();
	Category(int cid,string cname);
	int getCategoryID();
  string getCategoryName();
	~Category();


};