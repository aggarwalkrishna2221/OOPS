#include<iostream>
using namespace std;

class Time {
    private:
        int h, m, s;

    public:
        Time(int h = 0, int m = 0, int s = 0) : h(h), m(m), s(s) {}

        Time operator+(const Time& t)const{
            int sec = s + t.s;
            int min = m + t.m + sec/60;
            int hr = h + t.h + min/60;
            return Time(hr, min%60, sec%60);

        }

        void show(){
            cout << h << "h: " << m << "m: " << s << "s: "<< endl;
        }
};

int main(){
    Time t1(5,15,34), t2(9,53,58), t3;
    t3 = t1+t2;
    t3.show();

}