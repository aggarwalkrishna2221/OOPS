#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file1("source.txt");
    ofstream file2("destination.txt");

    char ch;

    while(file1.get(ch))
    {
        file2.put(ch);
    }

    cout<<"File copied successfully";

    file1.close();
    file2.close();
}