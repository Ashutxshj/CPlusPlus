#include <iostream>
#include <cmath>
int main()
{
    double x=3;
    double y=4;
    double z;
    double a;
    int b;
    double c;

    z=std::max(x,y); // same is min()
    std::cout<<z<<'\n';

    a=pow(2,3);
    std::cout<<a<<'\n';

    b=sqrt(9);
    std::cout<<b<<'\n';

    b=ceil(x);
    std::cout<<b;

    return 0;
}