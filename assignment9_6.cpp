#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("hello.txt", ios::out | ios::in);

    string str = "Hello World";

    for(int i=0; i<str.length(); i++)
    {
        file.put(str[i]);

        cout<<"Position = "<<file.tellp()<<endl;
    }

    file.seekp(6);

    file<<"C++";

    file.close();

    cout<<"Word replaced";
}