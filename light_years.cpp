#include<iostream>

double light_years(double);

int main()
{
    double a;
    std::cout<<"pls enter the the distance of light years:";
    std::cin>>a;
    std::cout<<a<<"light years is: "<<light_years(a)<<"astronomical units";
    return 0;
}

double light_years(double a)
{
    return a*62340;
}