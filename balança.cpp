#include <iostream>
using namespace std;
void nemesis(int x, int y, int z )
{
	int paradise=0;
	if (x >> y && x >> z)
	{
		paradise = x;
		cout << "X has the highest value. ";
	}
	if (y >> x && y >> z) 
	{
		paradise = y;
		cout << "Y has the highest value. ";
	}
	
	if(z >> paradise) cout << "Z has the highest value. ";

}

main()
{
	int a, b, c;
	cout << "Insert the first number: ";
	cin >> a;
	cout << "Insert the second number: ";
	cin >> b;
	cout << "Insert the third number: ";
	cin >> c;
	nemesis(a,b,c);
	return 0;
 } 
