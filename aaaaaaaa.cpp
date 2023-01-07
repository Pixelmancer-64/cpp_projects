#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

main()
{
	ofstream saida, saidaog, past;
	ifstream entrada, entradaog, entradapast;
	string code,pulo;
	int i,n;
	
	entrada.open("Teste58.txt");
	
	
	for (i=1; i<=10; i++)
	{
		cout << "HUGO, ACORDA: ";
	getline (cin,code);
	
	entrada.seekg(0);
	while (!entrada.eof())
	{
		getline (entrada,pulo);
		if(pulo == code || code.length() != 12 && code.length() != 16 )
		{
			cout << "Código inválido \n";
		}
		else{
			cout << "certinho amor\n";
		}
	
	}
	entrada.clear();
	}
	entrada.close();
	cout << "Teste";
	
}
