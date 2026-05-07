#include<iostream>
using namespace std;

class Polygon{
    protected:
        int width, height;
    public:
        void set_value(int w, int h){
            width = w;
            height = h;
        }
};

class Rectangle: public Polygon{
    public:
        int calculateArea(){
            return width * height;
        }
};

class Triangle: public Polygon{
    public:
        int calculate_area(){
            return (width*height)/2;
        }
};

int main(){
    Rectangle r;
    Triangle t;

    r.set_value(4,5);
    t.set_value(4,5);

    cout << "Rectangle Area = " << r.calculateArea() << endl;
    cout << "Triangle Area = " << t.calculate_area();
}