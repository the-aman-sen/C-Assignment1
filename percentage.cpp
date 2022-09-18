#include<iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3, sub4, sub5,total;
    float percent;

    cout<<endl<<"Enter marks for five subjects out of 100";

    cin>>sub1>>sub2>>sub3>>sub4>>sub5;

    total=sub1+sub2+sub3+sub4+sub5;
    cout<<endl<<"Total marks are : "<<total;

    percent=(float)total/5;

    cout<<endl<<"Percentage are : "<<percent;

    return 0;
}