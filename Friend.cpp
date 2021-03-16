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
~mat()
{

    cout<<"\nI am destructor";

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

friend mat trans(mat);
};

mat trans(mat x)
{
    mat m;
    m.r=x.c; m.c=x.r;
    for (int i=0; i<m.r; i++)
    {
        for (int j=0; j<m.c; j++)
        {
            m.a[i][j]=x.a[j][i];
        }
    }
return(m);
}



main()
{
mat m1,m2;
m1.read();
m2=trans(m1);
m1.show();
cout<<"transposed\n ";
m2.show();
}
