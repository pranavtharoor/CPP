#include <iostream>

using namespace std;

int gcd(int, int);
int main()
{
    int a,b;
    cout<<"Enter numbers\n";
    cin>>a>>b;
    cout<<"GCD = "<<gcd(a, b);
    return 0;
}
int gcd(int x, int y)
{
    if(x==0)
        return y;
    if(y==0)
        return x;
    return gcd(y, x%y);
}
