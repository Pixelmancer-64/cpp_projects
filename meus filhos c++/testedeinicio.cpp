#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
main()
{
	ofstream saida;
	string code;
	int i,n;
	saida.open("Codigos.txt");
	std::cout << "quantas vezes vc deseja utilizar o programa? \n";
	std::cin >> n;
	std::cout << "\n";
	for(i=1;i<=n;i++)
		{
		std::cout << "Codigo: ";
		scanf("\n");
		getline(cin, code);
		saida <<"\n"<<"Codigo: " << code ;
		saida.seekp(0);
}
	saida.close();
}
