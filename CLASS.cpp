#include<iostream>
#include<string>
using namespace std;
class stdu
{
	public:
	string name;
	int roll;
};

int main()
{
	stdu s1;
	cout<<"Enter your name here";
	cin>>s1.name;
	cout<<"Enter your roll number here";
	cin>>s1.roll;
	cout<<"Your name is:"<<s1.name<<endl;
	cout<<"your roll number is:"<<s1.roll<<endl;	
	return 0;
}
