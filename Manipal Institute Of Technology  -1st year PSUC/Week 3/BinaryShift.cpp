#include<iostream>
using namespace std;

int main()
{
    int num, shift, choice;
    cout<<"Enter value to be shifted: ";
    cin>>num;
    cout<<"Enter number of spaces to be shifted: ";
    cin>>shift;
    cout<<"\nTo shift\n Left : Enter 1\n Right: Enter 2\n ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            num = num<<shift;
            break;
        case 2:
            num = num>>shift;
    }
    cout<<"\nValue after shift: "<<num;
    return 0;
}
