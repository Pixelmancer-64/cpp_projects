#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void *iknow(float nothing, char atomic, char everything)
{

	if ((atomic == 99 || atomic == 67) && (everything == 70 || everything == 102)) // C para F
	{
		float horrorosa;
		horrorosa= (1.8 * nothing + 32 )	;
		cout << "Result: " << horrorosa << "F 1 ";
	}
	
	if ((atomic == 99 || atomic == 67) && (everything == 75 || everything == 107)) // C para K
	{
		float sisi;
		sisi = (nothing + 273.15	);
		cout << "Result: " << sisi << "K 2 ";
	}
	
	if ((atomic == 70 || atomic == 102) && (everything == 99 || everything == 67)) // F para C
	{
		float placeholder;
		placeholder =((5*(nothing-32.0))/9);
		cout << "Result: " << placeholder << "C 3 ";
	}
	
	if ((atomic == 70 || atomic == 102) && (everything == 75 || everything == 107)) // F para K
	{
		float touro, ruim;
		touro =((5*(nothing-32.0))/9);
		ruim =(touro+273.15);
		cout << "Result: " << ruim << "K 4 ";
	}
	
	if ((atomic == 75 || atomic == 107) && (everything == 67 || everything == 99)) // K para C
	{
		float papagaio;
		papagaio = nothing - 273.15;
		cout << "Result: " << papagaio << "C 5 ";
	}
	
	if ((atomic == 75 || atomic == 107) && (everything == 70 || everything == 102)) // K para F
	{
		float ilha, globo;
		ilha = nothing - 273.15;
	    globo = (1.8 * ilha + 32 );
	    cout << "Result: " << globo << "F 6 ";
	}
	

}

main()
{
	float humor; 
	char piadas, money;
	cout << "Insert the value: It can be C, F, or K. ";
	cin >> humor;
	cin >> piadas;
	cout << "Insert how you want it returned. It can be C, F or K. ";
	cin>> money; 
	iknow( humor,  piadas,  money);
	getch();
}
