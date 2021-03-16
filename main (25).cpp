#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
    int d,m,y,rd;
    cout<<"enter the days\n";
    cin>>d;
    m=d/30;
    y=m/12;
    rd=d%30;
    cout<<"months\n>> "<<m<<"\nyear\n>> "<<y<<"\nremaining days\n>> "<<rd;
    getch();
}
