#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double p, r;
    int n;
    cout<<"Enter principle amount: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>n;
    cout<<"Simple Interest = "<<p * r * n / 100.0<<"\n";
    cout<<"Compound Interest = "<<p * pow((1 + r / 100.0), n) - p;
    return 0;
}
