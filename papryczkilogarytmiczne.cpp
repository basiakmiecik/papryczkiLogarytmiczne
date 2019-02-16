#include <iostream>
#include <cmath>
//#include <term.h>

int main()
{
    int k=0;
    int stanPapryczek[k+1];
    std::cin>>k;
    int waga(0);
    int suma(0);
    for(int i=0; i<=k; i++)
    {
        //std::cout<<"Wpisz stan dla 2^"<<i<<" "<<std::endl;
        std::cin >>waga;
        stanPapryczek [i]=pow(2,i)*waga;
    }
    for(int i=0;i<=k;i++)
    {
        suma=suma+(stanPapryczek[i]);
    }

        std::cout<<(suma+1);

    return 0;
}
