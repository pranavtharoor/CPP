#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cout<<"Enter n and k\n";
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cout<<"\nTable of "<<i<<"\n";
        for(int j=1; j<=k; j++)
            cout<<i<<" X "<<j<<" = "<<i*j<<"\n";
    }
    return 0;
}
