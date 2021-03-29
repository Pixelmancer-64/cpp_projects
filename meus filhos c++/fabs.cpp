#include <iostream>
using namespace std;
void himan(float &byeman)
{
	float aux;
	aux = (pow(byeman,2))/byeman;
	byeman= aux;

}

main()
{
	float x;
	cout << "Insert a number: ";
	cin >> x;
	himan(x);
	cout << "Fabs: " << x << ".";
	return 0;
}
