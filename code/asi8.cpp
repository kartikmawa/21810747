#include<iostream>
#include<fstream>
using namespace std;
 int main()
{
    fstream f;
    char ch;
    f.open("first.txt",ios::out);
    if(!f)
    {
        cout<<"error opeming";
        return 0;

    }
    cout<<"FILE NAME first.txt IS CREATED \n";
    f<<"SY BTECH coumpuer divion a batch b1 \n"<<endl;
    f.close();
    f.open("first.txt",ios::in);
    if(!f)
    {

        cout<<"error openeing file ";
        return 0;

    }

    while(!f.eof())
    {

            f>>ch;
            cout<<ch;
        }

        f.close();
        return 0;

}