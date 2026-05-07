#include<iostream> 
#include <cmath>
using namespace std; 

// Right angled triangle
float area(float base, float height){
    return 0.5 * base * height;
}

// Equilateral triangle
float area(float side){
    return (sqrt(3)/4) * side * side;
}

// Isosceles Triangle
float area(float a, float a2, float b){
    float s = float (a + a2 +b) / 2;
    return sqrt(s*(s-a) * (s-a2) * (s-b));
}

int main(){
    float base, height, side , a, b;

    cout << "----Right Angled Triangle----" << endl;
    cout << "Enter Base:- ";
    cin >> base;
    cout << "Enter Height:- ";
    cin >> height;
    cout << "Area =" << area(base, height) << endl;

    cout << "----Equilateral Triangle----" << endl;
    cout << "Enter Side:- ";
    cin >> side;
    cout << "Area = " << area(side) << endl;

    cout << "----Isosceles Triangle----" << endl;
    cout << "Enter Equal Side:- " << endl;
    cin >> a;
    cout << "Enter Base:- " << endl;
    cin >> b;
    cout << "Area = " << area(a,a,b) << endl;

    return 0;
}