#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s[10],t;
 cout<<"Enter the values to the string:"<<endl;
 for(int i=0;i<10;i++)	                    
 {
 	getline(cin,s[i]);
 }
 for(int i=0;i<10;i++)
 {
 	for(int j=0;j<9;j++)
 	{
 		if(s[i]<s[j])
					{t=s[i];
 		s[i]=s[j];
 		s[j]=t; 															   }                                           
 		
	 }
 }
 cout<<"The lexicographical order of your input is:"<<endl;
 for(int i=0;i<10;i++)
 {
 	cout<<s[i]<<endl;
 }
 return 0;
}
