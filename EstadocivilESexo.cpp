#include <string>
#include <conio.h>
#include <iostream>
using namespace std;

enum Testadocivil {solteiro=1, casado, viuvo, separado, desquitado};
enum Tsexo { feminino=1, masculino, outro};

string sexotexto(enum Tsexo n)
{
	switch(n)
	{
		case feminino : return "Sexo : Feminino";
			case masculino : return "Sexo : Masculino";
			case outro : return "Sexo : Outro";
	}
}
string estadotexto(enum Testadocivil h)
{
	switch(h)
	{
		case solteiro : return "Estado civil - Solteiro";
			case casado : return "Estado civil - Casado";
			case viuvo : return "Estado civil - Viuvo";
			case separado : return "Estado civil - Separado";
			case desquitado : return "Estado civil - Desquitado";
	}
}

main()
{
	int i,a;
	enum Tsexo sexo;
	enum Testadocivil estado;
	cout << "Forneca o numero associado ao seu sexo... \n";
	cout << "1 - Feminino \n";
	cout << "2 - Masculino \n";
	cout << "3 - Outro \n";
	cin >> i;
	cout << "Forneca o numero associado a seu estado civil \n";
	cout << "1 - Solteiro\n";
	cout << "2 - Casado\n";
	cout << "3 - Viuvo\n";
	cout << "4 - Separado\n";
	cout << "5 - Desquitado\n";
	cin >> a;
	if (i >= 1 && i <= 3 && a >= 1 && i <= 5 ){
		sexo = (enum Tsexo)i;
		estado = (enum Testadocivil)a;
		cout << sexotexto(sexo) << " e " << estadotexto(estado) << " ."; 
	}
	else cout << "Deu merda";
	getch();
	
}
