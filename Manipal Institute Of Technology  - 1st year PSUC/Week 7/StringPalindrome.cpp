#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[100];
    int flag=1;
    cout<<"Enter the string\n";
    cin.get(str, 100);
    for(int i=0; i<strlen(str)/2; i++)
        if(str[i]!=str[strlen(str)-i-1])
            flag=0;
    if(flag)
        cout<<"String is a palindrome";
    else
        cout<<"String is not a palindrome";
    return 0;
}
