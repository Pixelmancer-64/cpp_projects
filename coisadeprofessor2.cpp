#include <iostream>
#include <fstream>
using namespace std;
main()
{
	ifstream entrada;
	ofstream saida;
	string code,pulo;
	float nota;
	entrada.open("Codigos.txt");
	saida.open("Codigos2.txt");
	getline (entrada, pulo);
	while(!entrada.eof())
	{
		getline(entrada,code);
		saida << "\n"<< code << " ";

	}
	entrada.close();
	saida.close();
}
