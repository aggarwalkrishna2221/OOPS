#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("data.txt");

    file<<"This is first line\n";
    file<<"This is second line\n";
    file<<"This is third line";

    file.close();

    ifstream file2("data.txt");

    file2.seekg(10);

    cout<<"Current position = "<<file2.tellg();

    char ch;

    cout<<"\nRemaining content:\n";

    while(file2.get(ch))
    {
        cout<<ch;
    }

    file2.close();
}