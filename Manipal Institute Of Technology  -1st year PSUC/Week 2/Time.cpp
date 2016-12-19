#include<iostream>

using namespace std;

int main()
{
    int s1,m,h,s2,n;
    cout<<"Enter time in seconds:\n ";
    cin>>s1;
    h=s1/3600;
    n=s1%60;
    m=n/60;
    n=n%60;
    s2=n;
    cout<<"time is=\n";
    cout<<h<<"hours\n"<<m<<"minute\n"<<s2<<"seconds";
    return 0;
}
