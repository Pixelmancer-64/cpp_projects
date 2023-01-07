#include <iostream>
using namespace std;
main()
{
	int a, b, d, x[a], y[a], z[b], i, p, h;
	cout << "Digite os números que deseja: ";
cin >> a;
p = a;
i=0;
b=a*2;
while (i < a)
{

	cout << "VALOR: \n";
	cin >> x[i];
	i = i+1;
}
i=0;
while (i < a)
{

	cout << "VALOR 2: \n";
	cin >> y[i];
	i = i+1;
}

i=0;
d=0;
while (i < a)
{
	h = x[i];
	z[d] = h;
	i = i+1;
	d=d+1;
}
i=0;

while (i < a)
{
	h = y[i];
	z[d] = h;
	i = i+1;
	d = d+1;
}

i=0;
	while (i < b)
	{

		cout << "teste: " << z[i] << "\n";
		i = i + 1;
		
	}
	return 0;
}
