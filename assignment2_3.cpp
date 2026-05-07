#include<iostream>
using namespace std;

class Demo{
    private:
    void showPrivate(){
        cout << "Private Class \n";
    }
    public:
    void showPublic(){
        showPrivate();
        cout << "Public Class \n";
    }
};

int main(){
    Demo d;
    d.showPublic();
}