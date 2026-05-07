#include<iostream>
#include<fstream>
using namespace std;

void countAlphabets(){
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    while (fin.get(ch)){
        if ((ch >= 'A' && ch<='Z') || (ch >= 'a' && ch <= 'z')){
            count++;
        }
    }

    fin.close();
    cout << "Total Alphabets = " << count;
};

int main(){
    countAlphabets();
    return 0;
}