#include <iostream>
#include <cmath>

int main()
{
    int k;
    int suma=0;
    std::cin>>k;
    for(int i=0; i<=k; i++)
    {
        int j=i;
        std::cin>>j;
        suma=suma+(pow(2,i)*j);
    }
    std::cout<<(suma+1);
    return 0;
}