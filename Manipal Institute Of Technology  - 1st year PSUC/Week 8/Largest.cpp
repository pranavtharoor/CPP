#include <iostream>
#include <string.h>

using namespace std;

int largest(int[], int);
int main()
{
    cout<<"Enter number of inputs: ";
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Largest = "<<largest(a, n);
    return 0;
}
int largest(int a[], int n)
{
    int l=a[0];
    for(int i=0; i<n; i++)
        if(a[i]>l)
            l=a[i];
    return l;
}
