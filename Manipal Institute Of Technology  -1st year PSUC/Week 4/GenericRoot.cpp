#include<iostream>
using namespace std;

int main()
{
    int n, s=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>9)
    {
        for(n; n>0; n/=10)
            s+=n%10;
        n=s;
        s=0;
    }
    cout<<"Generic root = "<<n;
    return 0;
}
