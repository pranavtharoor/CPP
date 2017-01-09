#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int m, n, p, k, l;
    cout<<"Enter order of the first matrix\n";
    cin>>m>>n;
    cout<<"Enter order of the second matrix\n";
    cin>>p>>k;
    if(n!=p)
    {
        cout<<"Matrices cannot be multiplied";
        exit(0);
    }
    int a[m][n], b[m][n], c[m][n];
    cout<<"Enter the first matrix\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<"Enter the second matrix\n";
    for(int i=0; i<n; i++)
        for(int j=0; j<k; j++)
            cin>>b[i][j];
    for(int i=0; i<m; i++){
        for(int j=0; j<k; j++){
            c[i][j]=0;
            for(int z=0; z<n; z++)
                c[i][j]+=a[i][z]*b[z][j];
        }
    }
    cout<<"\n\nProduct of the matrices\n\n";
    for(int i=0; i<m; i++)
        {
            for(int j=0; j<k; j++)
                cout<<"\t"<<c[i][j];
            cout<<"\n";
        }
    return 0;
}
