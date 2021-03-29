#include <iostream>
#include <time.h>
using namespace std;
main()
{
	int i, a ;
	cout << "Mi lord, digite a quantidade de colunas pls: \n";
	cin >> a;
	int vx[a];
	int vy[a];
	i=0;
	while (i < a)
	{
		cout << "valor " << i << ": ";
		cin >> vx[i];
		i++;
	}
	
	i = 0;
	while (i < a)
	{
		vy[i] = vx[a-1-i];
		i++;
	}
	
	i = 0;
	while (i < a)
	{
		vx[i] = vy[i];
		cout << vx[i] << " \n";
		i++;
	}
	
	
	cout << " \n";
	system("pause"); 
}


