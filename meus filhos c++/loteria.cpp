#include <iostream>
using namespace std;
main()
{
	int g[13], r[13], i, x;
i = 0;													
													
while (i <0 13)
{												
cout << "digite ai: ";
cin >> r[i];
i = i + 1;
}
i = 0;
while (i < 13)
{												
cout << "digite ai: ";
cin >> g[i];
i = i + 1;
}
i = 0;
x = 0;
while (g[i] == r[i])
{
	i = i +1;
	x = x +1;
	
}
if (x >= 13)
{
	cout << "ganhador";
}
else
{
	cout << "perdedor";
}
return 0;
}
