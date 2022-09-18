#include<iostream>
using namespace std;

int main()
{
    float basic,da,hra,gross;

    cout<<endl<<"Enter Ramesh's basic salary";
    cin>>basic;
    cout<<endl<<"Ramesh's basic salary is: "<<basic;
    da=0.4*basic;
    hra=0.2*basic;

    gross=basic+da+hra;

    cout<<endl<<"Ramesh's gross salary will be : "<<gross;

    return 0;
}