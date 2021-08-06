#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

main()
{
		ofstream saida, saidaog, past;
	ifstream entrada, entradaog, entradapast;
	string code,pulo,teste;
	int i,n;
	
	entradaog.open("Idle_Champions.txt");
	while(!entradaog.eof())
	{
		getline(entradaog,pulo);
		cout << "TESTE: " << pulo.length();
	}
}
