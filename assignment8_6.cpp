#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("demo.txt");
    fout << "Hello World";

    cout << "Writing Position: " << fout.tellp() << endl;
    fout.close();

    ifstream fin("demo.txt");
    char ch;

    fin.seekg(6);
    fin.get(ch);

    cout << "Character at position 6: " << ch << endl;
    cout << "Reading Position: " << fin.tellg() << endl;

    fin.close();
    return 0;
}