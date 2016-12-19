#include<iostream>
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
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(strcmp(name[i], name[j])>0)
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
