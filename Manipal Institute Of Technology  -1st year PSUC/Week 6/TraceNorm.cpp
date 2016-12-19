#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int m, n, t=0, norm=0;
    cout<<"Enter order of the matrix\n";
    cin>>m>>n;
    if(m!=n)
    {
        cout<<"Matrix is not a square matrix";
        exit(0);
    }
    int a[m][m];
    cout<<"Enter the matrix\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    for(int i=0; i<m; i++)
        {
            t+=a[i][i];
            for(int j=0; j<n; j++)
                norm+=pow(a[i][j], 2);
        }
    cout<<"Trace = "<<t<<"\nNorm = "<<pow(norm, 0.5);
    return 0;
}
