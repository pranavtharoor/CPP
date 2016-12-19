#include<iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout<<"Enter 3 numbers\n";
    cin>>a>>b>>c;
    cout<<"Smallest number: "<<(a<b ? (a<c ? a:c):(b<c ? b:c));
    return 0;
}
