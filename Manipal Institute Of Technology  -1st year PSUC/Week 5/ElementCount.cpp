#include<iostream>
using namespace std;

int main()
{
    int n, e, count=0;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array\n";
    int a[n], i=n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter an element to find the number of times its occurs in the array: ";
    cin>>e;
    for(int i=0; i<n; i++)
        if(a[i]==e)
            count++;
    cout<<e<<" occurs in the array "<<count<<" times";
    return 0;
}
