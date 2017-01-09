#include<iostream>
#include<math.h>

using namespace std;

int fact(int);
int main()
{
    cout<<"Enter number of terms: ";
    int n;
    cin>>n;
    cout<<"Enter x: ";
    int x;
    double sum=0;
    cin>>x;
    for(int i=0;i<n;i++)
        sum+=(pow(x,i))/fact(i);
    cout<<"Sum = "<<sum;
    return 0;
}
int fact(int f)
{
    int fact=1;
    for(int i=2;i<=f;i++)
    fact=fact*i;
    return fact;
}