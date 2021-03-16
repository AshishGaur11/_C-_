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
mat add(mat);

void trans(mat);
};
mat mat::add(mat n)
{
mat x;
x.r=0; x.c=0;
if(r==n.r&&c==n.c)
{
x.r=r; x.c=c;
for (int i=0; i<r; i++)
{
for (int m=0; m<c; m++)
{
x.a[i][m] = a[i][m] + n.a[i][m];
}
}
}
else
    cout<<"Error";
}
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
mat m1,m2;
m1.read();
m2.trans(m1);
m1.show();
cout<<"transposed\n ";
m2.show();
}
