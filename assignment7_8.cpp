#include<iostream>
using namespace std;

class Data{
    int a, b, c;

    public:
        Data():a(0), b(0), c(0) {}

        void operator()(int x){
            a = x;
            cout << "1 value set: " << a << endl;
        }

        void operator()(int x, int y){
            a = x; b = y;
            cout<<"2 value set: " << a << b << endl;
        }
          void operator()(int x, int y, int z) {
        a = x; b = y; c = z;
        cout << "3 values set: " << a << " " << b << " " << c << endl;
    }

    void show() {
        cout << "a=" << a << " b= " << b << " c= " << c << endl;
    }
};

int main() {
    Data d;

    d(10);          
    d(10, 20);       
    d(10, 20, 30); 

    cout << "\nFinal values: ";
    d.show();
};