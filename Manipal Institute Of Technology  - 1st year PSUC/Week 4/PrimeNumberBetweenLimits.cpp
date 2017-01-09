#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, flag=1;
    cout<<"Enter limits\n";
    cin>>a>>b;
    cout<<"Prime numbers in the given range:\n";
    for(a; a<=b; a++)
    {
        for(int i=2; i<=pow(a, 0.5); i++)
            if(a%i==0) flag=0;
        if(flag==1) cout<<a<<" ";
        flag=1;
    }
    return 0;
}
