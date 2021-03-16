#include <iostream>

using namespace std;

class complex

{
    int r, i;
    public:
    complex()
    {
        r=0;i=0;

    }
    complex(int a, int b)
    {
        r=a;i=b;
    }
    void read()
    {
        cout<<"Enter Real part:";
        cin>>r;
        cout<<endl<<"Enter imaginary part:";
        cin>>i;
    }
     void show()
    {
        read();
        cout<<r<<"+"<<i<<"i";

    }
    void add(complex x, complex y)
    {

        r=x.r+y.r;
        i=x.i+y.i;
    }


};


main()
{
        complex n1(3,5), n2,n3;
        n2.read();
        n3.add(n1,n2);
        n3.show();
}
