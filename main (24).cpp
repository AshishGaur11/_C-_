#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
    float c,r,t;
    cout<<"enter the r & t for interest\n";
    cin>>r>>t;
    c = pow (1+(r/100),t);
    cout<<"compound interest >> "<<c;
    getch();
}
