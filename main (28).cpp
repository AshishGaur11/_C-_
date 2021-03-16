#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
    int n;
    cout<<"enter the number to know divisibility\n";
    cin>>n;
    if (n%7==0)
        cout<<"its divisible";
    else
        cout<<"its not divisible";
    getch();
}
