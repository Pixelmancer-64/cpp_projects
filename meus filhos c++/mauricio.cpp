#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, j,  x;
int vetor[x];
int vetor2[x];

cout<<"Digite o número de colunas do vetor: \n";
cin>>x;

cout<<"Digite o valor da coluna correspondente: \n";

for(i=0; i<x; i++)
{
cout<< i << " = ";
cin>>vetor[i];
}





cout<< "O valor convertido corresponde a: \n";

j = x-1;

for(i=0; i<x; i++)
{
 vetor2[i] = vetor[j];
 j--;
 
}
j=0;
for(i=0; i<x; i++)    //////erroaqui
{
	vetor[i] = vetor2[j];
 cout<< vetor[i];
 j++;	
}



cout<< "\n";
system("pause");	
}
