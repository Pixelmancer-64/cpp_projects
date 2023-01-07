#include <iostream>
using namespace std;
void bridge(int &x, int &y)
{
	if(x % y << 1)
	{
		cout << "They are not divisible. ";
	}
	else
	{
		cout << "they are divisible. ";
	}
}
main()
{
	int a, b;
	cout << "Insert the first number: ";
	cin >> a;
	cout << "Insert the second number: ";
	cin >> b;
	bridge(a,b);
	if (a % 2 ==0 )
	{
	cout << "A is even. ";
	}
	if (a % 2 != 0)
	{
	cout << "A is odd. ";	
    } 
    
    if (b % 2 ==0 )
	{
	cout << "B is even. ";
	}
	if (b % 2 != 0)
	{
	cout << "B is odd. ";	
    } 
	return 0;
}
