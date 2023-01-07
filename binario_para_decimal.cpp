#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;
float binario (float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13)
{
	float b;
	b = a1*pow(2,0) + a2*pow(2,1) + a3*pow(2,2) + a4*pow(2,3) + a5*pow(2,4) + a6*pow(2,5) + a7*pow(2,6) + a8*pow(2,7) + a9*pow(2,8) + a10*pow(2,9) + a11*pow(2,10) + a12*pow(2,11) + a13*pow(2,13);
	return (b);
}
main()
{
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b;
	
	cout << "Insira o primeiro numero binario: ";
	cin >> b1;
	cout << "Insira o segundo numero binario: ";
	cin >> b2;
	cout << "Insira o terceiro numero binario: ";
	cin >> b3;
	cout << "Insira o quarto numero binario: ";
	cin >> b4;
	cout << "Insira o quinto numero binario: ";
	cin >> b5;
	cout << "Insira o sexto numero binario: ";
	cin >> b6;
	cout << "Insira o setimo numero binario: ";
	cin >> b7;
	cout << "Insira o oitavo numero binario: ";
	cin >> b8;
	cout << "Insira o nono numero binario: ";
	cin >> b9;
	cout << "Insira o decimo numero binario: ";
	cin >> b10;
	cout << "Insira o decimo primeiro numero binario: ";
	cin >> b11;
	cout << "Insira o decimo segundo numero binario: ";
	cin >> b12;
	cout << "Insira o decimo terceiro binario: ";
	cin >> b13;
	b = binario(b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13);
	cout << "Resultado: " << b << "."; 
	getch();
}

