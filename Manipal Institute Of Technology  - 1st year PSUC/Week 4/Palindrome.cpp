#include<iostream>
using namespace std;

int main()
{
    int num, num1, revnum=0;
    cout<<"Enter a number: ";
    cin>>num;
    num1=num;
    while(num>0)
    {
        revnum=revnum*10+num%10;
        num/=10;
    }
    if(num1==revnum) cout<<num1<<" is a palindrome";
    else cout<<num1<<" is not a palindrome";
    return 0;
}
