#include<iostream>
#include<cstring>
using namespace std; 

class STRING{
    private:
        char str[100];
    public:
        STRING(const char* s = ""){
            strcpy(str,s);
        }
        bool operator == (const STRING& s) const{
            return strcmp(str, s.str)== 0;
        }
        STRING operator+(const STRING& s) const{
            STRING temp;
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
            return temp;
        }

        void show(){
            cout << str << endl;
        }
};

int main(){
    STRING s1("Hello"), s2("World"), s3("Hello");
    STRING s4 = s1+ s2;
    cout<<"Concatenation:- ";
    s4.show();

    if(s1==s3){
        cout<< "s1 and s3 are EQUAL" << endl;
    }
    else{
        cout<<"s1 and s3 are NOT EQUAL" << endl;
    }

    if (s1 == s2){
    cout<<"s1 and s2 are EQUAL" << endl;
    }
    else{
        cout<<"s1 and s2 are NOT EQUAL" << endl;
    }
    
}