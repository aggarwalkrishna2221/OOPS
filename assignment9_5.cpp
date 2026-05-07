#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("alpha.txt");

    for(char ch='A'; ch<='Z'; ch++)
    {
        file<<ch;
    }

    file.close();

    ifstream file2("alpha.txt");

    file2.seekg(9);

    char ch;

    file2.get(ch);

    cout<<"10th character = "<<ch;

    file2.close();
}