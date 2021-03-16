
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
void add(mat k,mat n)
{
if(k.r==n.r&&k.c==n.c)
{
r=k.r; c=n.c;
for (int i=0; i<r; i++)
{
for (int m=0; m<c; m++)
{
a[i][m] = k.a[i][m] + n.a[i][m];
}
}
}
else
    cout<<"Error";
}
};

main()
{
mat m1,m2,m3;
m1.read();
m2.read();
m3.add(m1,m2);
m1.show();
m2.show();
cout<<"added ";
m3.show();
}
