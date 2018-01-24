#include<iostream>  
#include<string>
using namespace std;
class RK
{
	private:
	int roll;
	string name;
	public:
		void getdata(void);
		void putdata(void);
};
void RK::getdata()
{
	cout<<"Enter your roll number here"<< endl;
	cin>>roll;
	cout<<"Enter your name here"<< endl;
	
		cin>> name;
	}

void RK::putdata()
{
	cout<<"Your entered roll number is:"<< roll<<endl;
	cout<<"\n\n"<<endl;
	
		cout<<"Your entered name is:"<< name<<endl;
	
}
int main()
{
	RK O;
	O.getdata();
	O.putdata();
	cout<<"Thanks for using program developed by the Kadyan";
	return 0;
}
