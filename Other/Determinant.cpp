#include<iostream>
#include<math.h>

using namespace std;


int det(int a[][100], int m)
{
	if(m==1) return a[0][0];
	int b[m-1][100], d=0;
	for(int k=0; k<m; k++){
		for(int i=1, p=0; i<m; i++, p++)
			for(int j=0, q=0; j<m; j++)
				if(j!=k)
					b[p][q++]=a[i][j];
		d+=pow(-1, k)*a[0][k]*det(b, m-1);
	}
	return d;
}

int main()
{
	int m;
	cout<<"Enter dimension: ";
	cin>>m;
	int a[m][100];
	cout<<"Enter matrix\n";
	for(int i=0; i<m; i++)
		for(int j=0; j<m; j++)
			cin>>a[i][j];
	cout<<"Determinant = "<<det(a, m);
	return 0;
}