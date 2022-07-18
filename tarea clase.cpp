#include <iostream>
using namespace std;

int pot(int base,int expo)

{
  int re=1;
    for(int i=1;i<=expo;i++)
    {
      
        re=re*base;
    }
    return re;
}

double facto(int n)
{

double fac=1;

    for(int x=1;x<=n;x++)
    {
        fac=fac*x;
    }
        return fac;
}


double serie(int num)
{
    double suma=0;
    for(int g=2;g<=num;g++)
    {
       suma=suma+facto(g)/pot(5,g-1);
    }
    return suma;
}




main()
{
cout<<endl<<serie(6);
}