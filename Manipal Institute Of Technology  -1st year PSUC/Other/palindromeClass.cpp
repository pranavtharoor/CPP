#include<iostream>
#include<string.h>

using namespace std;

class compute
{
    char str[100];
public:
    void getData()
    {
        cin>>str;
    }
    int Palindrom()
    {
        int flag=1;
        for(int i=0; i<strlen(str)/2; i++)
            if(str[i]!=str[strlen(str)-i-1])
                flag=0;
        return flag;
    }
};

int main()
{
    compute o1;
    cout<<"Enter string\n";
    o1.getData();
    if(o1.Palindrom())
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
    return 0;
}
