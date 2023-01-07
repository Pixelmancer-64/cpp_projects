// Hugo Billé Martins - 09/12/2020
#include <iostream>
#include <conio.h>
using namespace std;

bool digito(char carac)
{

	return (carac >= '0' && carac <= '9' );
}

bool letra(char carac)
{
	return ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z' ));
}

bool digitoPar(char carac)
{
	return (carac == '0' || carac == '2' || carac == '4' || carac == '6' || carac == '8' );
}

bool vogal(char carac)
{
	return (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u' || carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U' );
}

bool maiuscula(char carac)
{
	return (carac >= 'A' && carac <= 'Z' );
}

main()
{
	char carac;
	cout << "Forneca um unico caractere:";
	cin >> carac;
	

	if ((vogal(carac)) && (maiuscula(carac)) )
	{
		cout << "O caractere fornecido e vogal maiuscula.";
	}
	
	if ((vogal(carac)) && (maiuscula(carac))==0 )
	{
		cout << "O caractere fornecido e vogal minuscula.";
	}
	
	if ((letra(carac)) && (vogal(carac))==0 && (maiuscula(carac)))
	{
		cout << "O caractere fornecido e consoante maiuscula";
	}
	
	if ((letra(carac)) && (vogal(carac))==0 && (maiuscula(carac))==0)
	{
		cout << "O caractere fornecido e consoante minuscula";
	}
	
	if ((digito(carac)) &&(digitoPar(carac)))
	{
		cout << "O caractere fornecido e digito par.";
	}
	
	if ((digito(carac)) && (digitoPar(carac))==0)
	{
		cout << "O caractere fornecido e digito impar.";
	}
	if ( (letra(carac)) || (digito(carac)) )
	{
	}

	else 
	{
	cout << "O caractere fornecido nao e nem letra, nem digito.";
	}
	getch();
}
