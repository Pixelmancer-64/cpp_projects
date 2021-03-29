//16/03/21
#include <iostream>
#include <conio.h>
using namespace std;

//12.Faça um algoritmo para calcular a transposta de uma matriz

main ()
{
    int const l=3;
    int const c=2;
    int m[l][c], i, k;

    cout<<"Matriz: \n";
    i=0;
    while (i<l)
    {
        k=0;
        while (k<c)
        {
            cout<<"Valor ["<<i<<"]["<<k<<"]= ";
            cin>>m[i][k];
            k++;
        }
        i++;
    }
    cout<<"Matriz transposta: \n\n";
    i=0;
    while (i<c)
    {
        k=0;
        while (k<l)
        {
            cout<<"Valor ["<<i<<"]["<<k<<"]= "<<m[i][k]<<"\n";
            k++;
        }
        i++;
        cout<<"\n";
    }
}
