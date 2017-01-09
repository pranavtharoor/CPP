#include<iostream>

using namespace std;

int fact(int);
int main()
{
    int n, r;
    cout<<"Enter n and r\n";
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<<fact(n)/fact(r)/fact(n-r);
    return 0;
}

int fact(int a)
{
    int f=1;
    for(a; a>0; a--)
        f*=a;
    return f;
}
