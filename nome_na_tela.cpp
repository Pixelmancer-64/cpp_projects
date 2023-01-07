//Hugo Billé Martins 18/10/2020
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

main()
{
	string name, first_name, last_name;
	
	cout << "Insert your name: \n";
	getline(cin,name);
	cout << "Insert your first name: \n";
	getline(cin,first_name);
	cout << "Insert your last name: \n";
	getline(cin,last_name);
	cout << "Name: " << name << " " << first_name << " " << last_name << ".";
	getch();
}
