#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int x, y, i, j, xiao, melhor, her[x][y];
	
	cout << "Digite a quantidade de linhas: \n";
	cin >> x;
		cout << "Digite a quantidade de colunas: \n";
		cin >> y;


	
i = 0;	
while (x > i )
{
	
		j = 0;
	
		while (y > j)
		{
	
	cout << "Atualmente na Matriz: " << i << " & " << j << "\n";
	cin >> her[i][j];
	j++;

	}
	
	i++;
	
}

i = 0;
xiao = 0;

while (x > i)
{
		j = 0;
	
		while (y > j)
		{
			xiao = her[i][j];

			if (melhor < xiao)
			{
				
				melhor = xiao;
					j++;
				
			}
			else 
			{
				break;
			}
			
			
		
	}
		i++;
}

cout << "O maior numero e: " << melhor << ".";
	getch();
}
