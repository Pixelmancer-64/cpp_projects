#include <iostream>
using namespace std;
main()
{
	int ab, x[ab], y[ab], i, p, i2, p2, i3, p3, i4, h;
	
	cout << "Digite a quantidade de numeros que deseja: ";
	cin >> ab;
	i=0;
	i2=0;
	i3=0;
	i4=0;
	p = ab;
	p2 = ab;
	p3 = ab;
	while (i < p)
	{
		cout << "Digite um numero: ";
		cin >> x[i];
		i = i +1;
	}
	
	while (p3 > i3)
	{
		h = x[i3];
		y[i4] = h;
		i3 = i3 + 1;
		i4 = i4 + 1;
	}
	
	while (p2 > i2)
	{
		cout << "teste: " << y[i2] << "\n";
		i2 = i2 + 1;
		
	}
	

return 0; 
}
