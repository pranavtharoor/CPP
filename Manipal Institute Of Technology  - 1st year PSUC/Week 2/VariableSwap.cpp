#include<iostream>

using namespace std;

int main()
{
    int a, b, temp;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    a += b;
    b = a - b;
    a = a - b;
    cout<<"Variables after swaping without the use of a temporary variable\
    \n a = "<<a<<"\n b = "<<b;
    cout<<"\n\n\nEnter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"Variables after swaping with the use of a temporary variable\
    \n a = "<<a<<"\n b = "<<b;
    return 0;
}
