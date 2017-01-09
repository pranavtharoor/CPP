#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int m, n, t;
    cout<<"Enter order of the matrix\n";
    cin>>m>>n;
    if(m!=n)
    {
        cout<<"Matrix is not a square matrix";
        exit(0);
    }
    int a[m][n];
    cout<<"Enter matrix\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(i==j)
            {
                t=a[i][n-i-1];
                a[i][n-i-1]=a[i][i];
                a[i][i]=t;
            }
    cout<<"Matrix after swaping diagonals\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cout<<"\t"<<a[i][j];
        cout<<"\n";
    }
    return 0;
}
