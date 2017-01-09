#include<iostream>
using namespace std;

int main()
{
    int d;
    cout<<"Enter number of days late the book is returned\n";
    cin>>d;
    cout<<"Fine: Rs.";
    if(d<=5) cout<<"0.50";
    else if(d<=10) cout<<"1.00";
    else if(d<=30) cout<<"5.00";
    else cout<<"10.00";
    return 0;
}
