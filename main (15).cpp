
#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    int i,l;
    char x;
    ifstream sour;
    //ofstream dest;
    sour.open("ashish.txt",ios::in);
    //dest.open("shyam.txt", ios::out);
    sour.seekg(0);
    while(sour.eof()!=0)
    {
        sour.get(x);
        cout<<x;
      //  dest.put(x);
    }
    return 0;
}
