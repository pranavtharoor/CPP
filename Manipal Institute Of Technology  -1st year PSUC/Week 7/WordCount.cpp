#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[100];
    int c=0;
    cout<<"Enter the string\n";
    cin.get(str, 100);
    for(int i=0; i<strlen(str); i++)
        if(str[i]==' ' && str[i+1]!=' ')
            c++;
    cout<<"Number of words: "<<++c;
    return 0;
}
