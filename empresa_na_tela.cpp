#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

main()
{
	
	string name;
	int day, month, year;
	float salary;
	char boss;
	
	cout << "Insert your complete name: \n";
	getline(cin,name);
	cout << "Insert the day of your birth: \n";
	cin >> day;
	cout << "Insert the month of your birth: \n";
	cin >> month;
	cout << "Insert the year of your birth: \n";
	cin >> year;
	cout << "Insert how much is your salary: \n ";
	cin >> salary;
	cout << "Insert Y with you are the boss of the enterprise and N if you are not: \n";
	cin >> boss;
	cout << "Name: " << name << " Date of birth: " << day << "/" << month << "/" << year << " Salary: " << salary << " Boss: " << boss;
	getch();
	
}
