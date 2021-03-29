#include <iostream>
using namespace std;
main ()
{
    int const g=6;
    int G[g]={1,2,3,4,5,6};
    int a[g], i, k;

    i=0;
    while (i<g)
    {
        cout<<"Ensira os valores da sua aposta: ";
        cin>>a[i];
        i++;
    }

    i=0;
    k=0;
    while (G[i]==a[i]);
    {
        i++;
        k++;
            if(k>=5)
            {
                cout<<"Voce ganhou!:)\n";
            }
            return 0;
    }
    else
            {
                cout<<"Voce perdeu!:(\n";
            }
}
