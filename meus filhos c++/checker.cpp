#include <iostream>
using namespace std;
void sus (char impostor)
{
	if (impostor >= 97 && impostor <= 122 || impostor >= 65 && impostor <= 90)
	{
	cout << "Char is a letter. ";
	}
	
	if (impostor >= 97 && impostor <= 122)
	{
	cout << "Char is lower case. ";
	} 
	
	if (impostor >= 65 && impostor <= 90)
	{
	cout << "Char is uper case. ";
	} 
	
	if (impostor == 97 ||impostor == 101 ||impostor == 105 ||impostor == 111 ||impostor == 117 ||impostor == 65 ||impostor == 69 ||impostor == 73 ||impostor == 79 ||impostor == 85)
	{
	cout << "Char is a vowel. ";
    }
    
    if (impostor >= 98 && impostor <=100 || impostor >= 102 && impostor <=104 ||impostor >= 106 && impostor <=110 ||impostor >= 112 && impostor <=116 ||impostor >= 118 && impostor <=122 ||impostor >= 66 && impostor <= 68 ||impostor >= 70 && impostor <=72 ||impostor >= 74 && impostor <=78 ||impostor >= 80 && impostor <=84 ||impostor >= 86 && impostor <=90 )
	{
		cout << "Char is a consanat. ";
	}
	else
	{
		cout << "Char is an algorism. ";
	}
	

	
}

main()
{
	char inocent;
	cout << "Insert the character: ";
	cin >> inocent;
	sus(inocent);
	return 0;
}
