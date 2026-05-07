#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    public:
    Rectangle(int l = 0, int b = 0){
        length = l;
        breadth = b;
    }

    ~Rectangle(){
        cout<<"Destructor called \n";
    }

    void area(){
        cout << "Area: " << length * breadth;
    }
};

int main(){
    Rectangle r[3] = {Rectangle(), Rectangle(4,5), Rectangle(5)};

    for(int i = 0; i < 3; i++){
        r[i].area();
    }
}