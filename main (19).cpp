#include <iostream>

using namespace std;

class number

{
    int r, i;
    public:
     void read()
    {
        cout<<"Enter Real part:";
        cin>>r;
        cout<<endl<<"Enter imaginary part:";
        cin>>i;
    }
     void show()
    {
         cout<<r<<"+"<<i<<"i";

    }
    void add(number x, number y)
    {

        r=x.r+y.r;
        i=x.i+y.i;
    }


};


main()
{
        number n1, n2,n3;
        n1.read();
        n2.read();
        n3.add(n1,n2);
        n3.show();
}
