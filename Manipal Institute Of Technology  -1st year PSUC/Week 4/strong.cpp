#include<iostream>
using namespace std;

int main()
{
    int n, m, s=0, f=1;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        for(int j=n%10; j>0; j--)
            f*=j;
        s+=f;
        f=1;
        n/=10;
    }
    if(m==s) cout<<m<<" is a strong number";
    else cout<<m<<" is not a strong nuber";
    return 0;
}
