#include <iostream>
using namespace std;

enum TCor {verde=1,  amarelo,  azul, branco};
enum TFileira{um=1, dois, tres, quatro, cinco, seis, sete, oito, nove, dez};
enum TColuna {a=1, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y};
struct TPos {
	enum TCor cor;
	enum TFileira fileira;
	enum TColuna coluna;
};
string convCOR (enum TCor c)
{
	switch (c)
	{
		case verde : return "VERDE";
		case amarelo : return "AMARELO";
		case azul : return "AZUL";
		case branco : return "BRANCO";
	}
}
string convFILEIRA (enum TFileira f)
{
	switch (f)
	{
		case um : return "UM";
		case dois : return "DOIS";
		case tres : return "TRES"; 
		case quatro : return "QUATRO";
		case cinco : return "CINCO";
		case seis : return "SEIS";
		case sete : return "SETE";
		case oito : return "OITO";
		case nove : return "NOVE";
		case dez : return "DEZ";
	}
}
string convCOLUNA (enum TColuna co)
{
	switch (co)
	{
		case a : return "A";
		case b : return "B";
		case c : return "C";
		case d : return "D"; 
		case e : return "E";
		case f : return "F"; 
		case g : return "G"; 
		case h : return "H";
		case i : return "I"; 
		case j : return "J";
		case k : return "K";
		case l : return "L";
		case m : return "M";
		case n : return "N";
		case o : return "O";
		case p : return "P";
		case q : return "Q";
		case r : return "R";
		case s : return "S";
		case t : return "T";
		case u : return "U";
		case v : return "V";
		case w : return "W";
		case x : return "X";
		case y : return "Y";
	}
}
main ()
{
	struct TCadeiras {
		struct TPos cadei;
	};
	struct TCadeiras selecao;
	int color, colun, file;
	cout<<"Escolha seu setor: \n 1 para VERDE \n 2 para AMARELO \n 3 para AZUL \n 4 para BRANCO. \n ==: ";
	cin>>color;
	cout<<"Digite o numero da fileira. (1 a 10): \n ==: ";
	cin>>file;
	cout<<"Digite o numero (posicao) da letra do alfabeto da coluna correspondente. (ex: A=1, B=2, C=3...): \n ==: ";
	cin>>colun;
	if(color<=5 && color>=1)
	{
		selecao.cadei.cor=(enum TCor)color;
		if (file<=10 && file>=1)
		{
			selecao.cadei.fileira=(enum TFileira)file;
			if(colun<=26 && colun>=1)
			{
				selecao.cadei.coluna=(enum TColuna)colun;
				cout<<"Voce escolheu: \n SETOR: "<<convCOR(selecao.cadei.cor)<<"\n FILEIRA: "<<convFILEIRA(selecao.cadei.fileira)<<"\n COLUNA: "<<convCOLUNA(selecao.cadei.coluna)<<" ";
			}
			else {
				cout<<"\n \n informacao invalida. digita certo.";
			}
		}
		else {
			cout<<"\n \n informacao invalida. digita direito";
		}
	}
	else{
		cout<<"\n \n informacao invalida. digita direito.";
	}
}
