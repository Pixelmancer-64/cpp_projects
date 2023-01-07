#include <iostream>
using namespace std; 

main()
{
	int n, x, i;
	cout << "Imprimindo em loop \n";
	cin >> n;
	i = 1;
	x = 0;
	while(i <= n)
	{
	    x = x + i;
		i = i + 1;
	}
	cout << "soma de tudo " << x;
	return 0;
}
