#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(int argc, char * argv[])
{
    int l;
    char x, ch='q';
    //char s[30],d[30];
    ifstream source;
/*
    cout<<endl<<"Enter Source File Name:";
    cin>>s;
    cout<<endl<<"Enter Destination File Name:";
    cin>>d;*/
    source.open(argv[1],ios::in);
    if(source!=0)
    {
        ofstream dest;
        dest.open(argv[2], ios::out);
        source.seekg(0);
        if (dest!=0)
        {
            cout<<endl<<"Destination file already exists. Do you wanrt to overwrite? Y/N:";
            cin>>ch;
            if(ch=='Y' || ch=='y')
            {
                while(source)
                {
                        source.get(x);
                        //cout<<x;
                        dest.put(x);
                }
            }
            else {cout<<endl<<"Bye";}
        }
    }
    else    cout<<endl<<"Source File Does Not Exist";
    return 0;
}
