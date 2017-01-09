#include<iostream>
using namespace std;

int main()
{
    float l1, l2, y, h;
    cout<<"f(x,y)=x*y\n\nEnter range of x\n";
    cin>>l1>>l2;
    cout<<"Enter value of y1: ";
    cin>>y;
    cout<<"Enter value of h: ";
    cin>>h;
    for(int i=0; i<(l2-l1)/h; i++)
    {
        y+=h*y*(l1+i*h);
        cout<<"y"<<i+2<<" = "<<y<<"\n";
    }
    return 0;
}
