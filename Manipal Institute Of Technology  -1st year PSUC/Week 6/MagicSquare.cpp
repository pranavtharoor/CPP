#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int m, n, t=0, s=0;
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
    for(int j=0; j<n; j++)
        t+=a[0][j];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            s+=a[i][j];
        }
        if(s!=t)
        {
            cout<<"Not a magic square";
            exit(0);
        }
        s=0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            s+=a[j][i];
        }
        if(s!=t)
        {
            cout<<"Not a magic square";
            exit(0);
        }
        s=0;
    }
    for(int i=0; i<n; i++)
        s+=a[i][i];
            if(s!=t)
        {
            cout<<"Not a magic square";
            exit(0);
        }
        s=0;
    for(int i=0; i<n; i++)
        s+=a[i][n-1-i];
            if(s!=t)
        {
            cout<<"Not a magic square";
            exit(0);
        }
    cout<<"Magic Square";
    return 0;
}
