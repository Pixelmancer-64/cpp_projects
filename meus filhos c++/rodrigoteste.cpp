#include <string>
#include <conio.h>
#include <iostream>
using namespace std;

enum TNaipe { paus = 1, ouros, espadas, copas};

string TNaipeParaTexto(enum TNaipe n)
{
	switch(n)
	{
		case paus : return "PAUS";
		case ouros : return "OUROS";
		case espadas : return "ESPADAS";
		case copas : return "COPAS";
	}
}

main()
{
	int i;
	enum TNaipe naipe;
	cout << "Forneca i numero associado ao naipe de sua escolha...\n";
	cout << "1 - paus\n";
	cout << "2 - ouros\n";
	cout << "3 - espadas\n";
	cout << "4 - copas\n";
	cout << "Sua escolha : ";
	cin >> i;
	if (i >= 1 && i <= 4){
		naipe = (enum TNaipe)i;
		cout << "Voce escolheu o naipe %s." << TNaipeParaTexto(naipe);
	}
	else cout << "Naipe invalido";
	getch();
	
}
