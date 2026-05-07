#include<iostream>
using namespace std;

class Test{
    int x;
    public:
    Test(int a){ a = x;}
    static Test add(Test *t1, Test *t2){
        return (t1->x + t2 ->x);
    }
    void show(){
        cout << x << endl;
    }
};

int main(){
    Test t1(10), t2(20), t3(0);
    t3 = Test::add(&t1, &t2);
}