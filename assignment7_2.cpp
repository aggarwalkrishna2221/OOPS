#include<iostream>
using namespace std;

class Shape {
    public: 
        virtual void area(){
            cout << "Area \n";
        }

        virtual void display(){
            cout << "Shape \n";
        }
};

class Circle : public Shape{
    public: 
        void area(){
            cout << "Circle Area = 78.5 \n";
        }

        void display(){
            cout << "Circle \n";
        }

};

class Rectangle : public Shape{
    public: 
        void area(){
            cout << "Rectangle Area = 20 \n";
        }

        void display(){
            cout << "Rectangle \n";
        }
};

int main(){
    Shape *s;
    Circle c;
    Rectangle r;
    
    s = &c;
    s->display();
    s->area();
}