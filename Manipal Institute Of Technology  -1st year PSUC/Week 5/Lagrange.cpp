#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of known points: ";
    cin>>n;
    float x[n], y[n], x1, y1=0, p;
    cout<<"\nEnter values of";
    for(int i=0; i<n; i++)
    {
        cout<<"\nx"<<i+1<<" = ";
        cin>>x[i];
        cout<<"f(x"<<i+1<<") = ";
        cin>>y[i];
    }
    cout<<"\nEnter the value of x to find f(x): ";
    cin>>x1;
    for(int i=0; i<n; i++)
    {
        p=1;
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {

                continue;
                p*=(x1-x[j])/(x[i]-x[j]);
            }
        }
        y1+=p*y[i];
    }
    cout<<"f("<<x1<<") = "<<y1;
    return 0;
}
