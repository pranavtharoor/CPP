#include<iostream>

using namespace std;

int main()
{
    int r20, r10, r5, p50;
    cout<<"Enter number of 20, 10, 5 rupee notes and 50 p coins\n";
    cin>>r20>>r10>>r5>>p50;
    cout<<"Money in piggy bank = "<<20 * r20 + 10 * r10 + 5 * r5 +
     0.5 * p50<<" rupees";
    return 0;
}
