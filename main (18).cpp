#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    int i,l;
    fstream myfile;
    char name[30];
    char x;
    myfile.open("ashish.txt", ios::in| ios::out);
    cout<<"Enter Your Name:";
    cin>>name;
    l=strlen(name);
    for(i=0;i<l;i++)
        myfile.put(name[i]);
    myfile.seekg(5);
    myfile.get(x);

    cout<<x;
    return 0;
}
