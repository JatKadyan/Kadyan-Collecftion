#include<iostream>
using namespace std;
int main()	{ float a,b; int c;
cout<<"Enter a number:"<<endl; cin>>a;
cout<<"Enter any other number:"<<endl; cin>>b;
cout<<"Enter your choice here:";
cin>>c;
switch(c)
{
	case 1: cout<<"addition of your input is:"<<(a+b)<<endl;
	break;
	case 2: cout<<"Substraction of your input is"<<endl;
	{if(a>b)
	cout<<(a-b)<<endl;
	else
	cout<<(b-a)<<endl;	}
	break;
	case 3: cout<<"Multiplication of your number is:"<<(a*b)<<endl;
	default:
	case 4: cout<<"Division of your input is:"<<(a/b)<<endl;

}
	return 0;
}
