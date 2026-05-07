#include<iostream>
using namespace std;

class Test{
    int x;
    public:
    Test(int a) {x = a;}
    Test add(Test t){
        return Test(x + t.x);
    }

    void show(){
        cout << x << endl;
    }
};

int main(){
    Test t1(5), t2(10), t3(15);
    t3 = t1.add(t2);
    t3.show();
}