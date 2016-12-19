#include<iostream>
using namespace std;

int main()
{
    int n, k, i=0;
    cout<<"Enter a number: ";
    cin>>n;
    k=n;
    for(n; n>0; n/=10)
        i+=(n%10)*(n%10)*(n%10);
    if(k==i) cout<<"Number is an armstrong number";
    else cout<<"Number is not an armstrong number";
    return 0;
}
