#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
main ()
{
    ofstream testea, testeb;
    ifstream testeazin;

    string aa, bb,cc;

    testea.open("testezinho.txt");
    cout<<"escreve ai \n";
    scanf("\n");
    getline(cin,aa);
    testea<< "\n" << aa;
    getline (cin, bb);
    testea<<"\n"<<bb;

    testea.close();
    testeb.open("testao.txt");
    testeazin.open("testezinho.txt");
    testeazin.seekg(0);
    while (!testeazin.eof())
    {
        scanf("\n");
		getline(testeazin, aa);
        cout<<aa<<"\n";
        testeb<<aa;
        
        scanf("\n");
    
		getline(testeazin,bb);
        cout<<bb<<"\n";
        testeb<<bb;
    }

}
