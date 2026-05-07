#include<iostream>
using namespace std;

class B;

class A{
    int x;
    public:
    A(int a) {x = a;}
    friend void swap(A &, B &);
};

class B{
    int y;
    public:
    B(int b) {y = b;}
    friend void swap(A &, B &);
};

void swap(A &a, B &b){
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main(){
    A a(5);
    B b(10);

    swap(a,b);
}