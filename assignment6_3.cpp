#include<iostream>
using namespace std;

class Account {
    const long accNo;
    long transId;
    string type;
    double balance;

    public:
        Account(long a, double b) : accNo(a){
            balance = b;
            transId = 0;
        }

        long depositAmount(const long to, const long from, const double amount){
            transId++;
            balance += amount;
            type = "Credit";
            return transId;
        }

        long creditAmount(const long to, const long from, const double amount){
            transId++;
            balance -= amount;
            type = "Debit";
            return transId;
        }

        void displayDetails() const{
            cout << "Acc No: " << accNo << endl;
            cout << "Balance: " << balance << endl;
            cout << "Last Txn: " << type << endl;
        }
};

int main(){
    Account a1(101, 5000);
    a1.depositAmount(101,102,1000);
    a1.creditAmount(102, 101, 500);
    a1.displayDetails();
}