#include<iostream>
using namespace std;

class Rectangle{
    int width, height;
    public:
    void getData(){
        cin >> width >> height;
    }

    void calculateArea(){
        cout << "Area" << width*height;
    }
};

int main(){
    Rectangle r;
    r.getData();
    r.calculateArea();
}