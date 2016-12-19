#include<iostream>
using namespace std;

int main()
{
    int n, s, l;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array\n";
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    s=l=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>l) l=a[i];
        if(a[i]<s) s=a[i];
    }
    cout<<"\nLargest = "<<l<<"\nSmallest = "<<s;
    return 0;
}
