#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int m, n;
	cout<<"contagem de numeros pares de M a N. ";
	cout<<"digite valor para m ";
	cin>>m;
	cout<<"digite valor para n ";
	cin>>n;

	while (m >= n)
	{
		cout<<m <<"\n";
		m=m-1;
		if(m==n)
		{
		break;
		}
	}
	while (m <= n)
	{
		cout<<n<<"\n";
		n=n-1;
		
	}
	getch();
}
