#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

main()
{

	ofstream entrada3;
	ifstream entrada;
	string nome, pulo;
	float nota;
	
	entrada3.open("Dados.txt");
	entrada.open("Dadosduplos.txt", ios::app);
    
   

	cout<< "Forneca a nome do aluno: ";
	getline(cin,nome);
	entrada3<< "\n" <<nome;
	cout<< "Forneca a primeira nota do aluno: ";
	cin >> nota;
	entrada3 << "\n" <<nota;	
	cout<< "Forneca a segunda nota do aluno: ";
    cin >> nota;
	entrada3 << "\n" <<nota; 
	
		while(!entrada.eof())
	{
	
	getline(entrada, nome);
	entrada3 << "\n" << nome;
	
    }
	
	entrada.close();
	entrada3.close();

cout << "AMIGO";
getch();	
}
