#include<iostream>

using namespace std;

int main()
{
    double radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Volume = "<<4.0 / 3.0 * 3.1415926535 * radius * radius * radius<<
    "\nSurface Area = "<<4.0 * 3.1415926535 * radius * radius;
    return 0;
}
