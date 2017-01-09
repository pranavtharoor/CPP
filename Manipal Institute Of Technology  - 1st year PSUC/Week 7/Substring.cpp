#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main(){
    char str1[100], str2[100];
    int flag=0;
    cout<<"Enter main string\n";
    gets(str1);
    cout<<"Enter string to be searched for\n";
    gets(str2);
    for(int i=0; i<strlen(str1); i++){
        for(int j=0; j<strlen(str2); j++){
            if(str1[i+j]==str2[j]){
                    flag=1;
            }
            else flag=0;
        }
        if(flag){
            break;
        }
    }
    if(flag) cout<<"Substring is present";
    else cout<<"Substring is absent";
    return 0;
}
