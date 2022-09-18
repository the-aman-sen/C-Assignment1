#include<iostream>
using namespace std;

int main()
{
    int a,b,addn,subn, muln;
    float divn;

    cout<<"Enter two numbers";
    cin>>a>>b;

    cout<<"Numbers are :"<<a<<endl<<b;

    addn=a+b;
    subn=a-b;
    muln=a*b;
    divn=(float) a/b;

    cout<<endl<<"Addition is:"<<addn;
    cout<<endl<<"Substraction is:"<<subn;
    cout<<endl<<"Multiplication is:"<<muln;
    cout<<endl<<"Division is:"<<divn;

    return 0;
}