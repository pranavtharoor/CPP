#include<iostream>
using namespace std;

int main()
{
    int m, n, s=0;
    cout<<"Enter the order of the matrix\n";
    cin>>m>>n;
    cout<<"Enter the matrix\n";
    int a[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<"Sum of rows and columns\n\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"\t"<<a[i][j];
            s+=a[i][j];
        }
        cout<<"\t"<<s<<"\n";
        s=0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            s+=a[j][i];
        cout<<"\t"<<s;
        s=0;
    }
    return 0;
}
