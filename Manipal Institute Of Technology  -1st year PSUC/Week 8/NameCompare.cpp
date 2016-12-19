#include<iostream>
#include<string.h>

using namespace std;

void nameSort(char[][30],int);
int compare(char[], char[]);
int main()
{
    char name[10][30];
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    cout<<"Enter names\n";
    for(int i=0;i<n;i++)
        cin>>name[i];
    nameSort(name, n);
    cout<<"\nNames in order\n\n";
    for(int i=0;i<n;i++)
        cout<<name[i]<<"\n";
    return 0;
}
void nameSort(char name[][30],int n)
{
    char temp[30];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(compare(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
}
int compare(char str1[], char str2[])
{
    return strcmp(str1, str2);
}
