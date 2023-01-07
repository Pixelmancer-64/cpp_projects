#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float Graus ( float graus)

{
	float R;
	const float pi = 3.141592;
	
	R = (pi * graus) / 2;
	
	return R;
}

float Area (float a, float b)

{ 
float R;
	float A;
	float G;
	
	A = (a * b * sin(Graus(R))) / 2;
		
		return A;
}




main()

{	
float X, Y, g;
float As, r;
	
	cout<< "Digite o valor de um lado do triangulo: \n ";
	cin>> X;
	
	cout<< "Digite o valor de mais um lado do triangulo: \n";
	cin>> Y;
	
	cout<< "Agora digite o valor do angulo formado por esses lados em graus: \n";
	cin>>g;
			
			r = Graus (g);
			As = Area (X, Y);
		
		
					
		cout<< "A area do triangulo em questão e: " << As << ".";
			
			getch();
			
}

