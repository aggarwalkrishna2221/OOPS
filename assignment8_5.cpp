#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length = " << strlen(str) << endl;

    ofstream fout("text.txt");
    fout << str;
    fout.close();

    ifstream fin("text.txt");
    char ch;

    cout << "Stored string in a file: ";
    while (fin.get(ch)){
        cout << ch;
    }

    fin.close();
    return 0;
}