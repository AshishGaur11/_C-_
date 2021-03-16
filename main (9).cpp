#include <iostream>

using namespace std;
void example(int );
main()
{
    int m=10;
    cout<<endl<<"In main m="<<m;
    example(m);
    cout<<endl<<"In main after call m="<<m;

}
void example(int x)
{
    cout<<endl<<"In example m="<<x;
    x=x+10;
    cout<<endl<<"In example after modification m="<<x;


}
