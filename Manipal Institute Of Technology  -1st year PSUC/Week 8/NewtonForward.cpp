#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int i, n, j, k=0, f, m;
    float x[10], y[10][10], sum, p, u, temp;
    float fact(int);
    cout<<"Enter number of records: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter X"<<i<<": ";
        cin>>x[i];
        cout<<"Enter f(x"<<i<<"): ";
        cin>>y[k][i];
    }
    cout<<"\n\nEnter X for finding f(x): ";
    cin>>p;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            y[i][j]=y[i-1][j+1]-y[i-1][j];
        }
    }
    cout<<"\n--------------------------------------------------\n";
    cout<<" x\ty\t";
    for(int i=0; i<n-1; i++)
    {
        cout<<"y"<<i<<"\t";
    }
    cout<<"\n--------------------------------------------------\n";
    for(i=0;i<n;i++)
    {
        cout<<"\n "<<x[i];
        for(j=0;j<n-i;j++)
        {
            cout<<" \t"<<y[j][i];
        }
    cout<<"\n";
    }
    i=0;
    do
    {
        if(x[i]<p && p<x[i+1])
        k=1;
        else
        i++;
    }while(k != 1);
    f=i;
    u=(p-x[f])/(x[f+1]-x[f]);
    cout<<"\nu = "<<u;
    n=n-i+1;
    sum=0;
    for(i=0;i<n-1;i++)
    {
        temp=1;
        for(j=0;j<i;j++)
        {
            temp = temp * (u - j);
        }
        m=fact(i);
        sum = sum + temp*(y[i][f]/m);
    }
    cout<<"\nf("<<p<<") ="<<sum;
    return 0;
}
float fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}

