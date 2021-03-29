#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int x, y, i, j, h, g, h2, g2, k, xiao, melhor, her[x][y];
	
	cout << "Digite a quantidade de linhas: \n";
	cin >> x;
		cout << "Digite a quantidade de colunas: \n";
		cin >> y;
		
	
	h2 = x;
	g2 = y;	
		
i = 0;	
while (x > i)
{
	
		j = 0;
	
		while (y > j)
		{
	
	cout << "Atualmente na Matriz " << i << " & " << j << "\n";
	cin >> her[i][j];
	j++;

	
	}
	
	i++;
	
	
}



while (x > i)
{
		j = 0;
	
		while (y > j)
		{
			

			if (xiao < her[i][j])
			{
				xiao = her[i][j];
				melhor = xiao;
			}
			
		
	}
		i++;
}

cout << "O maior numero e: " << melhor << " .";
	getch();
}
