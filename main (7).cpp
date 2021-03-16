
#include<iostream>
using namespace std;
class mat
{
    private:
    int a[10][10],r,c;
    public:
    mat ()
    {
        r=0;
        c=0;
    }
    mat (int x, int y)
    {
        r=x;
        c=y;
         for (int i=0; i<r; i++)
            for (int m=0; m<c; m++)
                   a[i][m]=0;
    }
    void read()
    {
        cout<<"enter no. of rows"<<endl;
        cin>>r;
        cout<<"enter no. of columns"<<endl;
        cin>>c;
        cout<<"enter the values for matt"<<endl;
        for (int i=0; i<r; i++)
        {
            for (int m=0; m<c; m++)
            {
                cin>>a[i][m];
            }
        }
    }
    void show()
    {
        cout<<"values"<<endl;
        for (int i=0; i<r; i++)
        {
            cout<<"\n ";
            for (int m=0; m<c; m++)
            {
                cout<<a[i][m]<<"\t";
            }
        }
        cout << endl;
    }
    void add(mat k)
    {

        if(k.r==r&&k.c==c)
        {
            r=k.r; c=k.c;
            for (int i=0; i<r; i++)
            {
                for (int m=0; m<c; m++)
                {
                    a[i][m] = k.a[i][m] + a[i][m];
                }
            }
        }
        else
        cout<<"Error";
    }
    void setdimension(mat x)
    {
        r=x.r;
        c=x.c;


    }
};

main()
{
    mat m[10],sum;
    int n,i;
    cout<<endl<<"How many Matrices";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Reading "<<i<<" Matrix";
        m[i].read();
    }
    sum.setdimension(m[0]);
    for(i=0;i<n;i++)
        sum.add(m[i]);

    sum.show();
}
