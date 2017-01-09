#include<iostream>

using namespace std;

void swap(int*, int*, int*);
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    swap(&a, &b, &c);
    cout<<a<<b<<c;
    return 0;
}

void swap(int *x, int *y, int *z)
{
    int temp;
    temp=*z;
    *z=*y;
    *y=*x;
    *x=temp;
}
