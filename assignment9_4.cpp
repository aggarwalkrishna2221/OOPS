#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter string: ";
    cin.getline(str,100);

    cout<<"Length = "<<strlen(str);

    ofstream file("data.txt");
    file<<str;
    file.close();

    ifstream file2("data.txt");

    char ch;

    cout<<"\nStored characters are:\n";

    while(file2.get(ch))
    {
        cout<<ch;
    }

    file2.close();
}