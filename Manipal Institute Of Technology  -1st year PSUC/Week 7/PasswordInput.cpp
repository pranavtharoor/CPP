#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"Enter password : ";
    int i=0;
    char c, pass[30], d=8;
    c=getch();
    while(c!=13)
    {

        if(c==8){
            cout<<"\b \b";
            i--;
            pass[i]='\0';
        }
        else{
            pass[i++]=c; #include<iostream>}
#include<string.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    char name[n][100], temp[100];
    cout<<"Enter names\n";
    for(int i=0; i<n; i++)
        cin>>name[i];
    for(int i=0; i<n; i++)#include<iostream>

>0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
    cout<<"Names in alphabetic order: \n";
    for(int i=0; i<n; i++)
        cout<<name[i]<<"\n";
    return 0;
}

            cout<<"*";
        }
        c=getch();
    }
    pass[i]='\0';
    cout<<"\nThe password is: "<<pass;
    return 0;
}
