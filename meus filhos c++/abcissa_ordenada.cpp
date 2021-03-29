#include <iostream>
using namespace std;

float operation(float x1,float x2)
{
float rx;
rx = (x1 + x2)/2;
return (rx);
}

float anotherone(float y1,float y2)
{
	float ry;
ry = (y1 + y2)/2;
return (ry);
}

main()
{
	float xi, yi, xf, yf, rx, ry;
	cout << "Insert inicial X point: ";
	cin >> xi;
	cout << "Insert inicial Y point: ";
	cin >> yi;
	cout << "Insert final X point: ";
	cin >> xf;
	cout << "Insert final X point: ";
	cin >> yf;
	rx = operation(xi,  xf);
	ry = anotherone(yi, yf);
	cout << "The results are: " << "(" << rx << "," << ry << ")" << ".";
	return 0; 
	
}
