#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    void set(int x) {
        this->x = x; 
    }

    void show() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Demo d;
    Demo *ptr = &d;   

    ptr->set(10);    
    ptr->show();

    d.show();         
}