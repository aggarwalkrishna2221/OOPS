#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNo;
    float cgpa;
    public:
    void setData(string n, int r, float f){
        name = n;
        rollNo = r;
        cgpa = f;
    }

    void display(){
        cout << name << " " << rollNo << " " << cgpa;
    }
};

int main(){
    Student s;
    s.setData("Krishna", 1, 8.5);
    s.display();
}