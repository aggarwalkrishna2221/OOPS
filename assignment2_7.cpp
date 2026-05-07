#include<iostream>
using namespace std;

namespace A{
    int x = 10;
    void show(){
        cout << "Namespace A";
    }
};

namespace B{
    int x = 20;
    void show(){
        cout << "Namespace B";
    }
};

int main(){
    cout << A::x << endl;
    A::show();

    cout << B::x << endl;
    B::show();
}