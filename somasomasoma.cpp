#include <iostream>
using namespace std;
main()
{

int a, x[a], y[a], z[a], i, p;

cout << "Digite a quantidade de números que deseja somar: ";
cin >> a;
p = a;
i=0;
while (i < p)
{

	cout << "VALOR: \n";
	cin >> x[i];
	i = i+1;
}
i=0;
while (i < p)
{

	cout << "VALOR 2: \n";
	cin >> y[i];
	i = i+1;
}
i=0;
while (i < p)
{

	z[i] = y[i] + x[i] ;
	i = i+1;
}
i=0;
	while (i < p)
	{

		cout << "teste: " << z[i] << "\n";
		i = i + 1;
		
	}
return 0;
}

