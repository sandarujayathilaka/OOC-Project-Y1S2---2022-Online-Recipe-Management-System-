#include<iostream>
#include"Advertisement.h"

using namespace std;

Advertisement::Advertisement()
{
	int AdvertisementID=0;
  
}

void Advertisement::DisplayDetails()
{
	cout<<"Advertisement ID:"<<AdvertisementID<<endl<<endl;
	
}

Advertisement::Advertisement(int AD){

 AdvertisementID= AD;
}

void Advertisement::givedetails()
{
	
}

Advertisement::~Advertisement(){
  cout<<"Adverticement Deleted"<<endl;
};