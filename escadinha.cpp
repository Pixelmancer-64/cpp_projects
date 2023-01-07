#include <iostream>
using namespace std;
main()
{
	int a, b, d,u, x[a], y[a], z[b], i, p, h;
	cout << "Digite os números que deseja: ";
cin >> a;
p = a;
i=1;
b=a*2;
while (i <= p)
{

	cout << "VALOR: \n";
	cin >> x[i];
	i = i+1;
}
i=1;
while (i <= p)
{

	cout << "VALOR 2: \n";
	cin >> y[i];
	i = i+1;
}

i=1;
d=1;
while (i <= p)
{
	h = x[i];
	z[d] = h;
		d=d+1;
	u = y[i];
	z[d] = u;
	i = i+1;
	d=d+1;
}


i=1;
	while (i <= b)
	{

		cout << "teste: " << z[i] << "\n";
		i = i + 1;
		
	}
	return 0;
}
