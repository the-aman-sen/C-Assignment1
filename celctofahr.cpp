#include<iostream>
using namespace std;

int main()
{
    float celc;
    float fahr;

    cout<<endl<<"Enter temperature in celcius";
    cin>>celc;

    fahr=(celc*9/5)+32;

    cout<<endl<<"Temperature in fahrenheit will be : "<<fahr;

    return 0;
}