 #include<iostream>
using namespace std;

int main()
{
    int n, e, p;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array\n";
    int a[n+1], i;
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"\nEnter the element to be inserted and the position\n";
    cin>>e>>p;
    while(i>p-1)
    {
        a[i]=a[i-1];
        i--;
    }
    a[i]=e;
    cout<<"Array after insertion of element:";
    for(int i=0; i<n+1; i++)
        cout<<" "<<a[i];
    cout<<"\n\nEnter the position of the element to be deleted\n";
    cin>>p;
    i=p-1;
    while(i<n)
    {
        a[i]=a[i+1];
        i++;
    }
    cout<<"Array after deletion of element:";
    for(int i=0; i<n; i++)
        cout<<" "<<a[i];
    return 0;
}
