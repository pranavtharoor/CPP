#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float x, s=0;
    int n, f=1;
    cout<<"Enter the values of x and n\n";
    cin>>x>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=2*i+1; j>0; j--)
            f*=j;
        s+=pow(x,2*i+1)*pow(-1,i)/f;
        f=1;
    }
    cout<<"sin("<<x<<") = "<<s;
    return 0;
}
