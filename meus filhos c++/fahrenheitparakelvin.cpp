// Hugo Billé Martins - 1ano info - 18/11/2020 - Avaliação 1
#include <iostream>
#include <conio.h>
using namespace std;

float fahrenheitparacelsius(float f)
{
	float tc;
	tc=((5*(f-32))/9);
	return tc;
}

float celsiusparakelvin(float c)
{
	float k;
	k=(c+273.15);
	return k;
}

void central(float tf, float &resultadoc, float &resultadok)
{
	resultadoc=fahrenheitparacelsius(tf);
	resultadok=celsiusparakelvin(resultadoc);
}

main()
{
float tf1, resultadoc1, resultadok1;
cout << "Digite a temperatura em Fahrenheit: ";
cin >> tf1;
central(tf1, resultadoc1, resultadok1);
cout << "Fahrenheit para Celsius: " << resultadoc1 << " e Fahrenheit para Kelvin: " << resultadok1 <<".";
getch();
}
