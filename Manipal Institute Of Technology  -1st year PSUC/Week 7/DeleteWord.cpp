#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[1000], delstr[1000];
    int flag, start[1000], k=0;
    cout<<"INPUT:\t\t";
    cin.getline(str, 1000);
 	cout<<"TO BE DELETED:\t";
    cin.getline(delstr, 1000);
    for(int i=0; i<strlen(str); i++){
        for(int j=0; j<strlen(delstr); j++){
            if(str[i+j]==delstr[j] && (str[i-1]==' ' || i==0) && (str[i+strlen(delstr)]==' ' || str[i+strlen(delstr)]=='\0')){
                    flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag)
            start[k++]=i;
    }
    strcat(delstr, " ");
    for(int i=0; i<k; i++){
        for(start[i]; str[start[i]]!='\0'; start[i]++){
            str[start[i]-strlen(delstr)*i]=str[start[i]+strlen(delstr)-strlen(delstr)*i];
        }
    }
    str[strlen(str)-strlen(delstr)*(k-1)]='\0';
    cout<<"OUTPUT:\t\t"<<str;
    return 0;
}