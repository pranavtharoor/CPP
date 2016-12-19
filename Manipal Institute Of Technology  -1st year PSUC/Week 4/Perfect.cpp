#include<iostream>
using namespace std;

int main()
{
    int n, a=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n/2; i++)
        if(n%i==0) a+=i;
    if(a==n) cout<<n<<" is a prefect number";
}
