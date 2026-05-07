#include<iostream>
using namespace std;

class Rectangle{
    int l, b;
    public:
    void setData(int x, int y){
        l = x;
        b = y;
    }
    int area(){
        return l*b;
    }
};

int main(){
    Rectangle r[3];

    r[0].setData(2, 3);
    r[1].setData(4, 5);
    r[2].setData(6, 7);

    for(int i = 0; i < 3; i++){
        cout << "Area is" << r[i].area();
    }
}