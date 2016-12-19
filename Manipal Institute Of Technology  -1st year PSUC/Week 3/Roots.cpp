#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a, b, c
    ;float root1,root2,re,im,disc;
    int e;
    cout<<"Enter values of a, b and c\n";
    cin>>a>>b>>c;
    disc = b*b - 4*a*c;
   if(disc<0)
   {cout<<"imaginary\n";
   re=-b/2*a;
   im=pow(fabs(disc),0.5)/2*a;
       cout<<re<<"+i"<<im;
       cout<<re<<"-i"<<im;
       }
       else if (disc==0){cout<<"real and equal roots";
       re=-b/2*a;
       cout<<"roots are"<<re;}
       else{cout<<"real and distinct roots";
       cout<<"roots are";
       root1=(-b+sqrt(disc))/2*a;
       root2=(-b+sqrt(disc))/2*a;
       cout<<root1<<root2;}return 0;


       }
}
