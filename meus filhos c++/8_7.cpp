//MRAEDARK
#include<iostream>
#include<conio.h>
using namespace std;

enum Tcor{
	verde=1,amarelo,azul,branco
};

struct Tlocal{
	enum Tcor setor;
	int fileira;
	char coluna;
};

string colortotext(enum Tcor setor)
{
	switch(setor)
	{
		case verde  : return "Verde";
		case amarelo: return "Amarelo";
		case azul   : return "Azul";
		case branco : return "Branco";
	}
}

main()
{
	int i, j;
	
	struct Tdados{
		struct Tlocal end;
	}dados;
	cout<< "          SETORES               \n 1-Verde \n 2-Amarelo \n 3-Azul \n 4-Branco";
	cout<< "\n\nDetermine o setor de sua cadeira: ";
	cin>> j;
	
	dados.end.setor = (Tcor)j;
	
	cout<< "\nDetermine a fileira de sua cadeira: ";
	cin>> dados.end.fileira;
	
	cout<< "\nDetermine a coluna de sua cadeira(A-Y): ";
	cin>> dados.end.coluna;
	
	i =dados.end.coluna;
	
	
	cout<< "\n\nSua cadeira esta localizada no setor ";
	if(j>=1 && j<=4)
	cout<<colortotext(dados.end.setor);
	else
	cout<< "--Setor indicado invalido--;";
	
	cout<< "\n\nFileira ";
	if(dados.end.fileira>=1 && dados.end.fileira<=10 )
	cout<<dados.end.fileira;
	else
	cout<< "Invalida;";
	
	cout<< "\n\nColuna: ";
	if((i>=65 && i<=89 ) || (i>=65+32 && i<=89+32))
	cout<<dados.end.coluna;
	else
	cout<< "Invalida;";
	return 0;
getch()	;
}
