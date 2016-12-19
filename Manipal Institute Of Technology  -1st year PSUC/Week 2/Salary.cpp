#include<iostream>

using namespace std;

int main()
{
    float salary;
    cout<<"Enter the basic salary: ";
    cin>>salary;
    cout<<"Dearness allowance = "<<0.4 * salary<<
    "\nHRA = "<<0.2 * salary<<"\nTotal = "<<1.6 * salary;
    return 0;
}
