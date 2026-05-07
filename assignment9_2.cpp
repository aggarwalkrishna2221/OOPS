#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

void countAlpha()
{
    ifstream file("NOTES.TXT");

    char ch;
    int count = 0;

    while(file.get(ch))
    {
        if(isalpha(ch))
            count++;
    }

    cout<<"Number of alphabets = "<<count;

    file.close();
}

int main()
{
    countAlpha();
}