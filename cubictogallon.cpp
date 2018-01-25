#include<iostream>
using namespace std;
class c
{ private:
	float a,g,c;
	public:
		void get()
		{ 
		cin>>a;
		}
	void conversion()
	{
		g=a*(1/7.481);
	}
	void put()
	{
	cout<<"Your input in gallons are:"	<<g<<endl;
	}
};
int main()
{
	c o;
	cout<<"ENter the data in cubic:"<<endl;
	o.get();
	o.conversion();
	o.put();
	return 0;
	
	
}
