#include<iostream>
using namespace std;

main()
{
 float M, N;
 
 cout<< "Imprimir de M ate N: \n";
 
 cout<< "Digite o valor de M e N: \n";
 cin>> M >> N;
 
 while(M>N)
 {
cout<< M<< "\n";
  M = M-1;

 }	

while(1+N>M)
 {
 	
 cout<< N << "\n";
  N = N-1;
  
 }		
	
	
getchar();	
}
