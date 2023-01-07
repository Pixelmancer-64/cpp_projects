#include <iostream>
using namespace std;
main()
{
    int i, a, b;
    cout<<"Numero de colunas: ";
    cin>>a;

 

    int vx[a], vy[a]; //Só é possível declarar um vetor de tamanho a depois que a tiver um valor atribuído

 

    //CUIDADO QUANDO USAR i OU a. A VARIÁVEL i VARIA. A VARIÁVEL a NÃO MUDA DE VALOR.
        
    i=0;
    while (i<a)
    {
        cout<<"valor: ";
        cin>>vx[i];
        i++;
    }

 

    i=0;
    while (i<a)
    {
        vy[i]=vx[a-1+i];
        i++;
    }
    i=0;
    while (i<a)
    {
      cout<<"."<<vy[i]<<".";
      i++;
    }
    return 0;
}
