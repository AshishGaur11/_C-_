#include <iostream>

using namespace std;
class length
{
    private:
        int f,i;
        static int count;
    public:
        length()
        {
            f=0;
            i=0;
            count++;

        }
        void read()
        {
            cout<<"enter the length"<<endl;
            cin>>f>>i;
        }
        void show()
        {
            cout<<f<<" feet "<<i<<" inch "<<endl;
        }
        friend length add1(length x, length y);
        void add2(length);
        void add3(length l1, length l2);
        length add4(length l1);
        static void showcount()
        {
            cout<<"total objects created="<<count;

        }
};


    length add1(length x,length y)
    {
        length z;
        z.f=x.f+y.f;
        z.i=x.i+y.i;
        if (z.i>=12)
        {
            z.f=z.f+1;
            z.i=z.i-12;
        }
        return(z);
    }

    void length::add2(length x)
    {
        f=f+x.f;
        i=i+x.i;
        if (i>=12)
        {
            f=f+1;
            i=i-12;
        }
    }

    void length::add3(length x, length y)
    {
        //length z;
        f=y.f+x.f;
        i=y.i+x.i;
        if (i>=12)
        {
            f=f+1;
            i=i-12;
        }
        //return(z);
    }

    length length::add4(length x)
    {
        length z;
        z.f=f+x.f;
        z.i=i+x.i;
        if (z.i>=12)
        {
            z.f=z.f+1;
            z.i=z.i-12;
        }
        return(z);
    }

main()
{
    length l1,l2,l3;
    l1.read();
    l2.read();
    l3=add1(l1,l2);
    l3.show();
    l1.add2(l2);
    l1.show();
    l3.add3(l1,l2);
    l3.show();
    l3=l1.add4(l2);
    l3.show();
    length::showcount();

}

