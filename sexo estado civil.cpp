#include <iostream>
#include <string>
using namespace std;
main()
{
	int s,a;
	enum Testadocivil {solteiro=1, casado, viuvo, separado, desquitado} Ttextoa ;
	enum Tsexo { feminino=1, masculino, outro} Ttextos;

	cout << "Forneca o numero associado ao seu sexo... \n";
	cout << "1 - Feminino \n";
	cout << "2 - Masculino \n";
	cout << "3 - Outro \n";
	cin >> s;
	
	if (s < 1 && s > 3)
	{
		cout << "ta errado otario";
	}
	
	cout << "Forneca o numero associado a seu estado civil \n";
	cout << "1 - Solteiro\n";
	cout << "2 - Casado\n";
	cout << "3 - Viuvo\n";
	cout << "4 - Separado\n";
	cout << "5 - Desquitado\n";
	cin >> a;
		if (a < 1 && a > 5)
	{
		cout << "ta errado otario";
	}

	Ttextoa = (enum Testadocivil)a;
	Ttextos = (enum Tsexo)s;
	if (s >= 1 && s <= 3)
	{
		switch(s)
		{
			case feminino : return "Sexo : Feminino";
			case masculino : return "Sexo : Masculino";
			case outro : return "Sexo : Outro";
		}
	}

	if (a >= 1 && s <= a)
	{
		switch(a)
		{
			case solteiro : return "Estado civil - Solteiro";
			case casado : return "Estado civil - Casado";
			case viuvo : return "Estado civil - Viuvo";
			case separado : return "Estado civil - Separado";
			case desquitado : return "Estado civil - Desquitado";
		}
	}
	cout << Ttextos << " e " << Ttextoa << " .";
	return 0;
}
