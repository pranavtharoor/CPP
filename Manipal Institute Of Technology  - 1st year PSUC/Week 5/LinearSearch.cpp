#include<iostream>
using namespace std;

int main()
{
    int n, e, flag=0;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array\n";
    int a[n], i;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter an element to find its position: ";
    cin>>e;
    for(int i=0; i<n; i++)
        if(a[i]==e)
        {
            cout<<i+1<<" ";
            flag=1;
        }
    if(flag=0) cout<<" the position(s) of "<<e<<" in the array";
        else cout<<"Element not found";
    return 0;
}
