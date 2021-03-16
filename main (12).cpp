#include <iostream>

using namespace std;
class length
{
private:
    int f,i;
public:
    void read()
    {
    cout<<"enter the length"<<endl;
    cin>>f>>i;
    }
    void show()
    {
    cout<<f<<" feet "<<i<<" inch "<<endl;
    }
    void add(length x,length y)
    {
    f=x.f+y.f;
    i=x.i+y.i;
    if (i>=12)
    {
    f=f+1;
    i=i-12;
    }
    }

};
main()
{
length l1,l2,l3;
l1.read();
l2.read();
l3.add(l1,l2);
l1.show();
l2.show();
l3.show();
}
