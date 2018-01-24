#include<iostream>
using namespace std;
int main()
{
	std::cout;
	std::cin;
	
unsigned int a,b,c;
	cout <<"Enter the value for any number: \n";
	cin >> a;
	cout<<"Enter the value or the second number: \n";
	cin >> b;
	if(a>b)
	{
		cout <<"You entered input having 1st no. greater is:" << a  <<endl;
		c=a-b;
		cout <<"The difference between the greater and the smaller of your input is:" << c <<endl;
	}
	else
	{
		cout <<"The greater number of your input is:" << b << endl;
		c=b-a;
		cout <<"The difference between the greater and smaller number of your input  is:" << c <<endl;
	}
	return 0;	
	}
