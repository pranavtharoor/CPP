#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[100];
    int flag=1;
    cout<<"Enter the string\n";
    cin.get(str, 100);
    for(int i=0; i<strlen(str); i++)
        if('a'<=str[i] && str[i]<='z')
            str[i]+='A'-'a';
        else if('A'<=str[i] && str[i]<='Z')
            str[i]-='A'-'a';
    cout<<"String with the case toggled\n";
    cout<<str;
    return 0;
}
