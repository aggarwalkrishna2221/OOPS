#include<iostream>
using namespace std;

class Array{
    int a[10];
    int size;

    public: 
        Array(int s){
            size = s;
            for (int i = 0; i < size; i++){
                a[i] = i*10;
            }
        }

        int& operator[](int i ){
            if (i < 0 || i>=size){
                cout << "Index" << i << "Out of bounds!" << endl;
                exit(1);
            }
             return a[i];
        }

        void show(){
            for(int i = 0; i < size; i++){
                cout << "a[" << i << "] = " << a[i] << endl;
            }
        }
       
};


int main(){
    Array a(5);
    a.show();

    cout<<"\n Accessing valid index a[3] = " << a[3] << endl;
    cout<<"Accessign valid index a[7]...." << endl;
    cout << a[7];
    
}