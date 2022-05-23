#include "status.h"
#include <iostream>
#include<string>
using namespace std;

void status::Displaystatus()
{
	cout << "Feedback : " << description << endl;
	cout << "Date : " << statusDate << endl;


}

status::status(int fid,string fdate,string des)
{

    statusId = fid;
    statusDate = fdate;
    description = des;


}

string status::getstatus(){

  return description;
}


void rankUser(){
    
  }

status::~status()
{
	cout<<"status Deleted"<<endl;
}