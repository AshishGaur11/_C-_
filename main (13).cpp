#include <iostream>

using namespace std;

class rect
{
private :
int l,b,a;
public :
rect()
{

    l=0; b=0;
}
rect(int x)
{
    l=x;b=x;

}
rect(int x, int y)
{

    l=x;b=y;
 }
void read();
void show();
void area();
~rect()
{
    cout<<"\n We in in the Destructor";

}
};

void rect::read()
{
cout<<"enter the length and breath for rectangle"<<endl;
cin>>l>>b;

}
void rect::show()
{
cout<<"\nthis is the area ";
cout<<a;
}
void rect::area()
{
a=l*b;
}
main()
{
rect r[10];
int n, s;
cout<<"\n How many rectangles, whose area you want to add:";
cin>>n;
for(int i=0;i<n;i++)
    r[i].read();
for(int i=0;i<n;i++)
    r[i].area();
for(int i=0;i<n;i++)
    r[i].show();

}
