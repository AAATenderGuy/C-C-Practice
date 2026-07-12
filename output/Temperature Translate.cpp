#include<iostream>
double Temperature(double a)
{
    return 1.8*a+32.0;
}
int  main()
{
    using namespace std;
    double a;
    cout<<"pls enter a Celsius value:";
    cin>>a;
    cout<<a<<" "<<"degrees Celsius is"<<Temperature(a)<<" "<<"degrees Fahrenheit"<<endl;
    return 0;
}