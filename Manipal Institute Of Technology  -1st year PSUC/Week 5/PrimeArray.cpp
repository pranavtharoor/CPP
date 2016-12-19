#include<iostream>
using namespace std;

int main()
{
    int n, flag=0, p=1;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array\n";
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        for(int j=2; j<a[i]; j++)
            if(a[i]%j==0)
                p=0;
        if(a[i]>2 && p)
        {
            cout<<a[i]<<" ";
            flag=1;
        }
        p=1;
    }
    if(flag) cout<<"-> pirme number(s) found in the given array";
    else cout<<"No prime numbers found in the given array";
    return 0;
}
