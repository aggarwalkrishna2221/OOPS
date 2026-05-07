#include<iostream>
using namespace std;

class Polygon {
    protected:
        float width, height;
    
    public:
        void set_value(float w, float h){
            width = w;
            height = h;
        }

        virtual float calculate_area() = 0;
};

class Rectangle: public Polygon{
    public: 
        float calculate_area() override{
            return width * height ;
        }
};

class Triangle: public Polygon{
    public:
        float calculate_area() override{
            return 0.5 * width * height;
        }
};

int main(){
    Polygon *ptr;

    Rectangle rect;
    ptr = &rect;
    ptr -> set_value(5,3);
    cout << "Rectangle Area:- " << ptr->calculate_area() << endl;
    
    Triangle tri;
    ptr = &tri;
    ptr-> set_value(5,3);
    cout << "Triangle Area:- " << ptr->calculate_area() << endl;

    return 0;
}