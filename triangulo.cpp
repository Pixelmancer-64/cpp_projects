#include <iostream>
#include <math.h>
using namespace std; 
float conversor (float graus)
{
	float ares;
	const float pi = 3.141592;
	ares = pi * graus / 180;
	return ares;
}

float triangulo (float a1, float b1)
{
	float c, ares;
	c= a1*b1*sin(ares)/2;
	return(c);
}

int main()
{
	float a,b,c,r;
	cout << "Declare o valor do lado a: ";
	cin >> a;
	cout << "Declare o valor do lado b: ";
	cin >> b;
	cout << "Declare o valor do angulo: ";
	cin >> r;
	conversor (r);
	c = triangulo(a,b);
	cout << "A area do triangulo e: " << c << ".";
	return 0;
}
