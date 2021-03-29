#include <iostream>
using namespace std;

void *mauricioefoda(float x1,float y1, float x2, float y2, float &hugo, float &efoda)
{
hugo =(x1 + x2)/2;
efoda=(y1 + y2)/2;
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
	mauricioefoda(xi, yi, xf, yf, rx, ry);
	cout << "The results are: " << "(" << rx << "," << ry << ")" << ".";
	return 0; 
}
