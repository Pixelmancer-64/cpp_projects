#include<iostream>
using namespace std;

main()
{
float x, p, n, i;
 i=1;
 n=1;
 
 	cout<< "Digite um numero: ";
		cin>>x;
	cout<< "Digite um expoente: ";
		cin>>p;	
if(p=>1) 
 while(n<=p)
 {
  i = i * x;
  
  n= n + 1;	
 }
 
 
 else
 
 
 {
 n=1;
 while(n<=p)
 {
  i = i * x;
  
  n= n + 1;	
 }
 }
 
	cout<< "A potencia corresponde a: " <<i;
		
getchar();	
}
