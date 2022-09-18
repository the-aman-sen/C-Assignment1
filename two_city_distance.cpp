#include<iostream>
using namespace std;

int main()
{
    int km, m,cm;
    long feet,inches;

    cout<<endl<<"Enter the distance between any two cities in kilometers";
    cin>>km;

    m=1000*km;
    cm=100*m;

    cout<<endl<<"Given Distance in meters will be : "<<m;
    cout<<endl<<"Given Distance in centimeters will be : "<<m;

    feet=km*3281;
    cout<<endl<<"Given Distance in feet will be : "<<feet;

    inches=km*39370;
    cout<<endl<<"Given Distance in inches will be : "<<inches;

    return 0;

}