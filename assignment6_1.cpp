#include <iostream>
#include<string.h>
using namespace std;

class Book {
    string title, author, ISBN;

public:
    bool addNewBook(string &title, string &author, string &ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
        return true;
    }

    bool removeBooks(string &id) {
        if (ISBN == id) {
            title = author = ISBN = "";
            return true;
        }
        return false;
    }

    void displayDetails() {
        if (ISBN != "")
            cout << title << " " << author << " " << ISBN << endl;
    }
};

int main() {
    Book b[5];

    string t, a, i;

    b[0].addNewBook(string("C++"), string("Bjarne"), string("101"));
    b[1].addNewBook(string("Java"), string("James"), string("102"));
    b[2].addNewBook(string("Python"), string("Guido"), string("103"));
    b[3].addNewBook(string("DSA"), string("Mark"), string("104"));
    b[4].addNewBook(string("OS"), string("Galvin"), string("105"));

    string removeID = "103";
    b[2].removeBooks(removeID);

    for (int j = 0; j < 5; j++)
        b[j].displayDetails();
}