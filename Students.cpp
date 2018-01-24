#include<iostream>
using namespace std;
class z
{ private:
	
	string name;
	int roll;
	int contact;
	
	
	public:
		void get_data(void);
		void put_data(void);
};
  void z::get_data()
{
	cout<<"Enter your name here:"<<endl;
	cin>> name;
	cout<<"Enter your roll number here:"<<endl;
	cin>> roll;
	cout<<"Enter your contact number here:"<< endl;
	cin>> contact;
}
void z::put_data()
{
	cout<<"Your name is: "<<name<<endl<<"Your roll number is:"<<roll<<endl<<"Your contact number is:"<<contact<<endl;
	cout<<"Developed by Mr. Kadyan";
}
int main()
{
	z a[10],b[10];
	for(int i=0;i<10;i++)
	{
		a[i].get_data();
	}
	for(int i=0;i<10;i++)
	{
		a[i].put_data();
	}
}
