#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main()
{
	char texto1[80], texto2[80];
	int comprimento1, comprimento2, comparacao;
	strcpy(texto1, "CEFET");
	strcpy(texto2, texto1);
	strcat(texto2, "/RJ");
	comprimento1 = strlen(texto1);
	comprimento2 = strlen(texto2);
	
	comparacao   =strcmp(texto1,texto2);
	
	cout << "O primeiro texto e " << texto1 << ".\n";
	cout << "O segundo texto e "  << texto2 << ".\n";
	cout << "O comprimento do primeiro texto e " <<comprimento1 <<".\n";
	cout << "O comprimento do segundo texto e " <<comprimento2 <<".\n";	
	
	if(comparacao == 0)
	   cout<< "Os dois textos sao identicos. \n";
	else if (comparacao == 1)
	cout<< "O primeiro texto e maior na comparacao alfabetica. \n";
	   else
	   	cout<< "O primeiro texto e menor na comparacao alfabetica. \n";
	   	
getch();
}
