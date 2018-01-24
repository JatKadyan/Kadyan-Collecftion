#include<iostream>
using namespace std;
typedef struct C
{
	float real;
	float img;
}no;
no addnumber(C,C);
int main()
{
	no c1,c2,t;
	char s;
	cout<<"ENter 1st complex number"<<endl;
	cout<<"ENter the real part and imaginary part of the complex number";
	cin>>c1.real>>c1.img;
	
	cout<<"ENter the 2nd complex number:"<<endl;
	cout<<"Enter the real and imaginary part of the complex number:";
	cin>>c2.real>>c2.img;
	
	s=(t.img>0) ? '=':'-';
	t.img=(t.im
	0g>0) ? t.img : -t.img;
	t=addnumber(c1,c2);
	cout<<"sum:"<<t.real <<t.img<<"i"<<endl;
	return 0;
}no addnumber(C c1,C c2)
{
no z;
z.real=c1.real+c2.real;
z.img=c1.img+c2.img;
return(z);
}
