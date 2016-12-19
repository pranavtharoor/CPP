#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
	char a[20];
	cout<<"Enter hexadecimal number: ";
	cin>>a;
	int dec=0, q=0, oct=0;
	bool flag=true;
	for(int i=strlen(a)-1; i>=0; i--, q++)
	{
		if((int)tolower(a[i])>='a' && (int)tolower(a[i])<='f')
			dec+=((int)tolower(a[i])-'a'+10)*pow(16, q);
		else if((int)tolower(a[i])>='0' && (int)tolower(a[i])<='9')
			dec+=((int)tolower(a[i])-'0')*pow(16, q);
		else
			flag=false;
	}
	if(!flag)
		return 1;
	for(int i=0; dec>0; i++)
	{
		oct+=(dec%8)*pow(10, i);
		dec/=8;
	}
	cout<<"Octal number: ";
	cout<<oct;
	return 0;
}