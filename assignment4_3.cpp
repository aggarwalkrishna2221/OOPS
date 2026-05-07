#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called\n";
    }

    ~Test() {  // destructor
        cout << "Destructor called\n";
    }
};

int main() {
    Test t1;
}