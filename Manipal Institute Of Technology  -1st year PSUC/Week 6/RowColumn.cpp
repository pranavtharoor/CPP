#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int m, n, c, r1, r2;
    cout<<"Enter order of the matrix\n";
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the matrix\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<"To interchange\n Rows: Enter 1\n Columns: Enter 2\n";
    cin>>c;
    cout<<"Enter row numbers/column numbers to interchange\n";
    cin>>r1>>r2;
    r1--;
    r2--;
    if(c==1)
        for(int i=0; i<n; i++)
        {
            a[r1][i]+=a[r2][i];
            a[r2][i]=a[r1][i]-a[r2][i];
            a[r1][i]-=a[r2][i];
        }
    else if(c==2)
        for(int i=0; i<m; i++)
        {
            a[i][r1]+=a[i][r2];
            a[i][r2]=a[i][r1]-a[i][r2];
            a[i][r1]-=a[i][r2];
        }
    else
        {
            cout<<"Invalid";
            exit(0);
        }
    cout<<"Matrix after the interchange\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
    return 0;
}
