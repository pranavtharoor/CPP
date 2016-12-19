#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[1000], words[100][100];
    int del[100], k=0, i=0, flag=0;
    cout<<"Enter string\n";
    cin.getline(str, 1000);
    strcat(str, " ");
     for(int j=0; j<strlen(str); j++){
        if(str[j-1]==' '){
            i++;
            k=0;
        }
        words[i][k++]=str[j];
     }
     k=0;
    for(int j=0; j<=i; j++)
    {
        for(int l=0; l<=i; l++)
        {
            if(strcmp(words[j], words[l])==0 && j!=l) del[k++]=l;
        }
    }
    cout<<"\nString with repeated words removed\n";
     for(int l=0; l<=i; l++)
     {
        flag=0;
        for(int j=0; j<=i; j++)
        {
            if(l==del[j]) flag=1;
        }
        if(flag) continue;
        cout<<words[l];
     }
    return 0;
}