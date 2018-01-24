#include<iostream>
using namespace std;
int main()
{
	string a;
	cout<<"Enter your name";
	cin>> a ;
	
	cout<<"Your input is:" <<a <<endl;
	int c;
	cout<<"Enter your year of admission to university:"<<endl;
	cin>> c ;
	cout<<"\n \n \n";
	
	
	int b;
	cout<<"Enter your last 4 digits of your UID";
	cin>> b  ;
	
	if(b==2014)
	{
		cout<<"Your UID is:" "14BCS" <<b<<endl;
	}
	
	else if(b==2015)
	{
		cout<<"Your UID is:" "15BCS" <<b<< endl;
	}
	
	else if(b==2016)
	{
		cout<<"Your UID is:" "16BCS" <<b<< endl;
	}
	
	else if(b==2017)
	{
		cout<<"Your UID is:" "17BCS" <<b<< endl;
	}
	
	else if(b==2018)
	{
		cout<<"Your UID is:" "18BCS" <<b<< endl;
	}
	
	cout<<" Thankyou for using Kadyan Program"<<endl;
	return 0;
}
