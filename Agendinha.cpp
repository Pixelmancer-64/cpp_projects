#include <iostream>
using namespace std;
enum Ttipo { residencial=1, comercial, movel
	};
struct Tagenda{
	int ddd, numero;
	
	string nome;
	enum Ttipo tipo;
};
string tipotexto(enum Ttipo m)
{
	switch(m){
		case residencial : return "Residencial";
		case comercial : return "Comercial";
		case movel : return "Movel";
	}
}
struct Tagenda agenda;
main(){
	int i,h,j;
	cout << "Nome do contato: \n";
	getline(cin,agenda.nome);
	cout << "DDD: \n";
	cin >> i;
	agenda.ddd = i;
	cout << "Numero: ";
	cin >> h;
	agenda.numero = h;
	cout << "Tipo de numero: \n 1- Residencial \n 2 - Comercial \n 3 - Movel \n:" ;
	cin >> j;
	agenda.tipo = (enum Ttipo)j;
	cout << "Contato: " << agenda.nome << "\n" << "Numero: " << "(" << agenda.ddd << ")" << 
	agenda.numero << "\n" << "Tipo: " << tipotexto(agenda.tipo);
	
}
