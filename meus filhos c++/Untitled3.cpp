#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std; 
main()
{
	int h,n;
	cin >> h;
	n = 0;
	while(h !=0)
{
	h = h / 10;
	n = n + 1;
}

 cout << n;
}
