#include<iostream>
using namespace std;

struct Student{
    string name, degree, hostel;
    int roll_no;
    float cgpa;

    void addDetails(){
        cout << "Enter name:- ";
        cin >> name;
        cout << "Enter degree:- ";
        cin >> degree;
        cout << "Enter hostel:- ";
        cin >> hostel;
        cout << "Enter your roll number:- ";
        cin >> roll_no;
        cout << "Enter your CGPA:- ";
        cin >> cgpa;
     }

    void displayDetails(){
        cout << "\n Name:- " << name;
        cout << "\n Degree:- " << degree;
        cout << "\n Hostel:- " << hostel;
        cout << "\n CGPA:- " << cgpa;
    }
};

int main(){
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}