#include<iostream>

using namespace std;

int isPrime(int);
int main()
{
    int n;
    cout<<"Enter limit: ";
    cin>>n;
    if(n>=3)
    {
    cout<<"Prime numbers till "<<n<<":\n";
    for(int i=2; i<=n; i++)
        if(isPrime(i))
            cout<<i<<" ";
    }
    return 0;
}

int isPrime(int p)
{
    int flag=1;
    for(int i=2; i<=p/2; i++)
        if(p%i==0)
            flag=0;
    return flag;
}
