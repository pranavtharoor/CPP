#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter the order of the mtrix\n";
    cin>>m>>n;
    if(m!=n)
    {
        cout<<"Matrices of order "<<m<<"x"<<n<<" cannot be symmetric";
        exit(0);
    }
    n=1;
    int a[m][m];
    cout<<"Enter the matrix\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
            if(a[i][j]!=a[j][i])
            {
                cout<<"Matrix is not symmetric";
                exit(0);
            }
            cout<<"Matrix is symmetric";
    return 0;
}
