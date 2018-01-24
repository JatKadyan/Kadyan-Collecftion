#include<iostream>
using namespace std;
   
#define MAX 14
 
int main()
{
    int i,j,k;
    
 int r=14;
   for(i=0;i< MAX;i++)
    {
      
        for(j=0;j<r ;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
         
        printf("\n");
    r--;
		}
		return 0;
}
