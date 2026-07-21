#include<iostream>
int caculate(int age)
{
    return age*12;
}
int main()
{
    using namespace std;
    int age;
    cout<<"enter your age:";
    cin>>age;
    cout<<"your age in months is:"<<caculate(age);
    return 0;
}