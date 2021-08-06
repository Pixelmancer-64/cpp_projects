//toupper
#include<iostream>
#include<conio.h>

using namespace std;

lighttop(char x[], int control)
{
int t; 	
	for( int n=0;  n<control; n++)
	{
	   t = x[n];
	  
	if  (t >= 97 && t<= 122 )
	{
	 
	 t = t - 32 ;
	 x[n]= t;
	 cout<< x[n];	
	}
	else
	cout<< x[n];
    }
	
}

main()
{
int f = 5;
char v1[5]={'CCCCCCCCCCCCCCCaaaaaaaaaaaaaaaaaaa'};


lighttop(v1, f);

	
	

 


 
	
	
getch();	
}
