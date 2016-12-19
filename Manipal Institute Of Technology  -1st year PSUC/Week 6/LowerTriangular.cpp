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
    for(int i=0; i<m; i++)
        for(int j=n-1; j>i; j--)
            if(a[i][j]!=0)
            {
                cout<<"Not a lower triangular matrix";
                exit(0);
            }
    cout<<"Lower triangular matrix";
    return 0;
}
