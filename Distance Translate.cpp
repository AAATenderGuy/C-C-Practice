#include<iostream>
double  const translate(double a,double b)
{
    return b=a*220;
}
int main()
{
    using namespace std;
    double a,b;
    cout<<"pick a number:";
    cin>>a;
    cout<<"the distance is :"<<translate(a,b);
    return 0;
}