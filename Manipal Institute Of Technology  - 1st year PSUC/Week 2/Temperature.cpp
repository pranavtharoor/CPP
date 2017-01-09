#include<iostream>

using namespace std;

int main()
{
    double temperature;
    cout<<"Enter the temperature in celcius: ";
    cin>>temperature;
    cout<<temperature<<" degrees celcius is "<<
    9.0 / 5.0 * temperature + 32<<" degrees farenhiet";
    cout<<"\nEnter the temperature in farenhiet: ";
    cin>>temperature;
    cout<<temperature<<" degrees farenhiet is "<<
    5.0 / 9.0 * (temperature - 32)<<" degrees celcius";
    return 0;
}
