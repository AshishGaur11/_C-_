#include <iostream>
using namespace std;
class complex
{
    private:
        int x,y;
    public:
    complex(){x=0;y=0;}
    complex(int a, int b)
    {
        x=a; y=b;
    }
    void read()
    {
        cout<<"enter the real part"<<endl;
        cin>>x;
        cout<<"enter the imaginary part"<<endl;
        cin>>y;
    }
    //~complex() {cout<<endl<<"Destructor";}
    void show()
    {
        cout<<x<<"+"<<y<<"i";
    }
    void add(complex q)
    {
        x=q.x+x;
        y=q.y+y;
    }
};
main()
{
    complex c1[10],sum;
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
        c1[i].read();
    for(int i=0;i<n;i++)
        sum.add(c1[i]);
    sum.show();
}
