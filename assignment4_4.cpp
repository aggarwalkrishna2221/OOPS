#include<iostream>
using namespace std;

class Demo{
    public:
    int x;
    void show(){
        cout << "Value = " << x << endl;
    }
};

int main(){
    int *p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;

    float *f = new float(5.5);
    cout << *f << endl;
    delete f;

    int*arr = new int[3];
    arr[0] = 1, arr[1] = 2; arr[2] = 3;
    for (int i = 0; i < 3; i++){
        cout << "Value is "<< arr[i] << endl;
    }

    Demo *d = new Demo;
    d->x = 20;
    d->show();
    delete d;
}