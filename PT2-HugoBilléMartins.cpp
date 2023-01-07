// Hugo Billé Martins - 17/03/2021
#include <iostream>

using namespace std;
float hugo (float t)
{
float soma, aux1, aux2, n, i;
	aux1=0; 
	aux2=1; 
	soma=0; 
	n=1;
	i=0;
	if (t<=0)
	{
		aux2=0;
	}
	while (t>n)
	{
	soma=aux1+aux2;
	aux1=aux2;
	aux2 = soma;
	n=n+1;
	i++;
	}
	return aux2;

}
main()
{
int  p, x[40], i, aux;
float h;
p=40;
	cout<<"Razao  aurea \n";
hugo(p) ;
	i=0;
	aux=1;
	while(i<40)
	{
		x[i]=hugo(aux);
		aux++;
		i++;
	}
	i=0;
	while(i<40)
	{
		h= 1.0 * x[i+1] / x[i];
		cout << "R: " << x[i+1]<< "/" << x[i] << " = " << h << "\n";
		i++;
	}

	return 0;

}
