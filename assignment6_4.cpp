#include<iostream>
using namespace std;

class B;

class A{
    int x; 
    public:
        A(int a) {x = a;}
        friend int add(A,B);
};

class B{
    int y;
    public:
        B(int b) {y = b;}
        friend int add(A,B);
};

int add(A a, B b){
    return a.x + b.y;
}

int main(){
    A a(5);
    B b(10);
    cout << add(a,b);
}