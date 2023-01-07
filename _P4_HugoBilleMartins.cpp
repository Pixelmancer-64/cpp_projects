// Hugo Billé Martins - 10/03/2021
#include <iostream>
using namespace std;
main ()
{
	int a, i, j, y, g, b;
	
	cout << "Digite a quantidade de numeros que deseja armazenar: ";
cin >> a;
	
	int x[a];
	
	i=0;
while (a > i)
{

	cout << "Numero natural " << i + 1 << ": \n";
	cin >> x[i];
	if (x[i]>=0)

	i++;
}

y = 0;
g = 0;
while (g < a)
{
	g = y * y;
	y++;

}

y=y - 1;
int h[y][y];
b = 0;
i = 0;


while (y > b )
{
	
		j = 0;
	
   
		while (y > j)
		{
		
			if (i==a)
			{
				i = 0;
			}
			
		   	
		   h[b][j] = x[i];
		   	cout << "H[" << b << "][" << j << "] = " << h[b][j] << " \n" ;
		
		 
	
	i++;
	j++;

	}
	
	b++;
	
}


	return 0;
}
