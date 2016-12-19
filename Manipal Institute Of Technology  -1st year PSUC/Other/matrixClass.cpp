#include<iostream>

using namespace std;

class matrix
{
    int mat[100][100], m, n, rowSum[100]={0};
public:
    void getData()
    {
        cout<<"Enter dimentions of matrix\n";
        cin>>m>>n;
        cout<<"Enter matrix\n";
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
    }
    void dispRowSum()
    {
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                rowSum[i]+=mat[i][j];
        cout<<"Row sum:\n";
        for(int i=0; i<m; i++)
            cout<<"\t"<<rowSum[i]<<"\n";
    }
    void putData()
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
                cout<<"\t"<<mat[i][j];
            cout<<"\n";
        }
    }
};

int main()
{
    matrix m1;
    m1.getData();
    m1.putData();
    m1.dispRowSum();
    return 0;
}
