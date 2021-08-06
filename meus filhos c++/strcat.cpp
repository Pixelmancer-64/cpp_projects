#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main()
{
int  n, i, tam1=12, tam2=12, tam3=tam1+tam2;

string v1[tam1]={"chocolate "}, v2[tam2]={"ao leite"}, v3[tam3];


 
 for(n=0; n<tam1; n++)
 {
 	v3[n] = v1[n];
 	
 }
 
 i=0;
 for(n=tam1; n<tam3; n++)
 {
 	v3[n]= v2[i];
 	i++;
 	
 }

for(n=0; n<tam3; n++)
{
	cout<< v3[n] << "";
}
	
	
	
}
