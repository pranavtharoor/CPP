#include<iostream>

using namespace std;

int main()
{
    int k=0, s1, s2, l=0, j=0, i=0;
    cout<<"Enter the dimentions of the matrix\n";
    cin>>s1>>s2;
    int a[s1][s2];
    cout<<"\nSpiral Matrix\n\n\n";
    while(s1-k-1>=0 && s2-k-1>=0){
        for(j; j<=s2-k-1 && l<=s1*s2-1; j++)
            a[i][j]=++l;
        j--;
        i=k+1;
       for(i; i<=s1-k-1 && l<=s1*s2-1; i++)
            a[i][j]=++l;
        i--;
        j=s2-k-2;
       for(j; j>=k && l<=s1*s2-1; j--)
            a[i][j]=++l;
        j++;
        i=s1-k-2;
        k++;
       for(i; i>=k && l<=s1*s2-1; i--)
            a[i][j]=++l;
        i++;
        i=k;
        j=k;
    }
    for(int i=0; i<s1; i++){
        for(int j=0; j<s2; j++)
            cout<<"\t"<<a[i][j];
        cout<<"\n\n\n\n";
    }
    return 0;
}