#include<iostream>
using namespace std;
class xyz
{
private:
int a, b;
float p;
public:
/*xyz ()
{
    a=0;
    b=0;
    p=0;
}
xyz (int x)
{
    a=x;
    b=0;
    p=2*22*a/7;
}*/
xyz (int x=10, int y=20)
{
    a=x;
    b=y;
    p=2*(a+b);
}
~xyz()
{

    cout<<"\nI am destructor";

}
void show()
{
cout<<"\nPerimeter or Circumference"<<endl;
cout<<p;
}

};



main()
{
    xyz o1,o2(5),o3(2,2);
    o1.show();
    o2.show();
    o3.show();
}
