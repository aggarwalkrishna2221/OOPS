#include<iostream>
using namespace std;

class Book{
    string title, author, IBSN;

    public:
        Book(){
            title = author = IBSN = "";
        }

        Book(string title, string author, string IBSN){
            this->title = title;
            this->author = author;
            this->IBSN = IBSN;
        }

        Book(const Book &b){
            title = b.title;
            author = b.author;
            IBSN = b.IBSN;
        }

        bool removeBooks(string id){
            if (IBSN == id){
                title = author = IBSN = "";
                return true;
            }
            return false;
        }

        void displayDetails(){
            if (IBSN != ""){
                cout << title << " " << author << " " << IBSN << endl;
            }
        }
};

int main(){
    Book b[3] = {
        Book("C++", "Bjarne", "101"),
        Book("Java", "James", "102"),
        Book("Python", "Guido", "103")
    };

    b[1].removeBooks("102");

    for(int i=0; i<3; i++){
        b[i].displayDetails();
    }
}