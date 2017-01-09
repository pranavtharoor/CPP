using namespace std;
#include<iostream>
#include<math.h>
#include<conio.h>
int fact(int);
int main()
{
cout<<"the series is : 1+x/1+x^2/2!+x^3/3!....n";
cout<<"write number of values to be calculated";
int n;
cin>>n;
cout<<"enter value of x";
int x;
double sum=0;
cin>>x;
for(int i=0;i<n;i++)
{
sum+=(pow(x,i))/fact(i);

}
cout<<"the sum is:"<<sum;
return 0;
}
int fact(int f)
{
int fact=1;
for(int i=2;i<=f;i++)
fact=fact*i;
return fact;
}
