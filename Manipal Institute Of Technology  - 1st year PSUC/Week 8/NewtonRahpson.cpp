#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int deg;
    float x1, x2, fx1, fdx1, temp;
    cout<<"Enter the degree: ";
    cin>>deg;
    int coefs[++deg];
    for(int i=0; i<deg; i++)
    {
        cout<<"Enter coeffitient of x^"<<i<<": ";
        cin>>coefs[i];
    }
    cout<<"Your polynomial is\n";
    for(int i=0; i<deg; i++)
    {
        cout<<"("<<coefs[i]<<")x^"<<i;
        if(i==deg-1)
            continue;
        cout<<" + ";
    }
    cout<<"\nEnter x1: ";
    cin>>x1;
    cout<<"Tabulated values of x1 fx1 fdx1 x2\n";
    do
    {
        x1=x2;
        fx1=fdx1=0;
        for(int i=deg-1; i>=0; i--)
            fx1+=coefs[i]*(pow(x1, i));
        for(int i=deg-1; i>=0; i--)
            fdx1+=coefs[i]*i*(pow(x1, i-1));
        x2=x1-fx1/fdx1;
        cout<<x1<<"\t"<<fx1<<"\t"<<fdx1<<"\t"<<x2<<"\n";
    } while(fabs(x2-x1)>0.0001);
    cout<<"Root: "<<x2;
    return 0;
}