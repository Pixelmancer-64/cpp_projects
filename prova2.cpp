#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std; 

int quantidadeDeDigitosDeUmInteiro(int n)
{
int r =0;
if (n==0) return -2;
while(n !=0)
{
	n = n / 10;
	r = r + 1;
}
return r;
}

int digitoDeUmInteiro(int n)
{
int digito,tam;
tam =quantidadeDeDigitosDeUmInteiro(n);
	while(tam >= 0)
{
	digito = n%10;
	tam=tam/10;
}

 return digito;
}


int espelho()
{
	int resultado;
	
}
main()
{
  int x,y,digito;
  cout << "A: ";
  cin >> x;
  cout << "B: ";
  cin >> y;
  digitoDeUmInteiro(x);
  cout << "teste2: " << digito;
  getch();
}
