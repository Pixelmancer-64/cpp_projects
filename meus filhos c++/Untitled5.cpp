#include <iostream>
#include <conio.h>
using namespace std;
int quantidadeDeDigitosDeUmInteiro (int n)
{
	int i, r=0;
	if(n==0) return 1;
	else while (n !=0)
	{
		n=n/10;
		r=r+1;
	}
	return r;
}
int digitoDeUmInteiro (int n, int pos)
{
	int i, digito, tam;
	tam=quantidadeDeDigitosDeUmInteiro (n);
	if (pos>=tam) return -1;
	else
	{
		for (i=0; i<=pos; i++)
		{
			digito = n%10;
			n=n/10;
		}
		return digito;
	}
	
}
main()
{
	int numero, posicao;
	cin>>numero;
	cin>>posicao;
	cout<<"e "<<digitoDeUmInteiro(numero, posicao)<<"\n";
	getch();
	
}
