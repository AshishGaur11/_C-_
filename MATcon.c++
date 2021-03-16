#include<iostream>
using namespace std;
class mat
{
    private:
        int a[10][10],r,c;
    public:
        mat (void)
        {
            r=0;
            c=0;
        }
        mat (int x, int y)
        {
            r=x;c=y;
            for (int i=0; i<r; i++)
            {
                for (int m=0; m<c; m++)
                {
                    a[i][m]=0;
                }
            }

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
        void trans(mat);
};


void mat::trans(mat x)
{
    r=x.c; c=x.r;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            a[i][j]=x.a[j][i];
        }
    }
}



main()
{
mat m1,m2(), m3(2,3);
m1.read();
m1.show();
m2.show();
m3.show();
}
