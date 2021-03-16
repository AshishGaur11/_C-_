#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
float a,b,c,s,m;
cout<<"enter the side of triangle";
cin>>a>>b>>c;
s=(a+b+c)/2;
m =sqrt(s*(s-a)*(s-b)*(s-c));
cout<<s<<"\n";
cout<<m;
getch();
}
