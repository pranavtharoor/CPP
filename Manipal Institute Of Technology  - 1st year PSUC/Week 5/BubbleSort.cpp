#include<iostream>
using namespace std;

int main()
{
    int n, c;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array\n";
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter\n 1 to arrange array in acending order\n 2 to arrange array in decending order\n";
    cin>>c;
    cout<<"Array after sorting:";
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
        {
            if(c==1 && a[j]>a[j+1])
            {
                a[j+1]+=a[j];
                a[j]=a[j+1]-a[j];
                a[j+1]-=a[j];
            }
            else if(c==2 && a[j]<a[j+1])
            {
                a[j+1]+=a[j];
                a[j]=a[j+1]-a[j];
                a[j+1]-=a[j];
            }
        }
    for(int i=0; i<n; i++)
        cout<<" "<<a[i];
    return 0;
}
