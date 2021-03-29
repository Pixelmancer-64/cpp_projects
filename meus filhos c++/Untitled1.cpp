#include<iostream>
using namespace std;

int fibo(int x)
{
    int a,b,r,l;
    a=0 , b=1;
    for(l=1;l<x;l++)
    {
        r=a+b;
        a=b;
        b=r;
    }
    return b;
}
main()
{
    int aux,i;
    int v[40];
    aux=1;
    i=0;
while(i<40)
{
    v[i]=fibo(aux);
    i++;
}
float a;
    for(i=0;i<40;i++)
    {
        a=v[i+1]/v[i];
        cout<<v[i+1]<<"/"<<v[i]<<"="<<a;
    }
}
