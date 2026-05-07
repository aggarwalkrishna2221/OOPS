#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void setComplex(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i\n";
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setComplex(2, 3);
    c2.setComplex(4, 5);

    c3 = c1.add(c2);

    c3.display();
}