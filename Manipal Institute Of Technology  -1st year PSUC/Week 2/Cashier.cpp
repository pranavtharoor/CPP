#include<iostream>

using namespace std;

int main()
{
    int r100, r50, r10, amt;
    cout<<"Enter amount: ";
    cin>>amt;
    r100 = amt / 100;
    amt %= 100;
    r50 = amt / 50;
    amt %= 50;
    r10 = amt / 10;
    cout<<"Number of currency notes:\n 100 rupee notes: "<<r100
    <<"\n 50 rupee notes:  "<<r50<<"\n 10 rupee notes:  "<<r10;
    return 0;
}
