#include <iostream>

using namespace std;

class circle
{
private :
float a,r;
public:
void read()
{
cout<<"enter the values"<<endl;
cin>>r;
}
void area()
{
a=3.14*r*r;
}
void show()
{
cout<<a;
}

};
main()
{
circle c1;
c1.read();
c1.area();
c1.show();

}
