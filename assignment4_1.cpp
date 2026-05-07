#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    public:
     Rectangle(){
        length = 0;
        breadth = 0;
    };

    Rectangle(int l, int b){
        length = l;
        breadth = b;
    };

    Rectangle(int l){
        length = breadth = l;
    }

    void area(){
        cout << "Area:- " << length*breadth;
    }
};

int main(){
    Rectangle r1;
    Rectangle r2(10,5);
    Rectangle r3(5);

    r1.area();
    r2.area();
    r3.area();
}