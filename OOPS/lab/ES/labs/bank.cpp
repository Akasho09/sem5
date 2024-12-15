#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Account Class
class Account {
private:
    int accountNumber;
    double balance;
    string accountHolderName;
    
public:
Account() {}
Account(int accNum, double initBalance, string holderName) {
        accountNumber = accNum;
        balance = initBalance;
        accountHolderName = holderName;
    }
int getAN(){return accountNumber ; }
void setBalance(int n) {balance = n ;}

void InputDetails() {
    cin >> accountNumber;
    cin >> accountHolderName;
    balance = 0;
}
// add money
void Deposit(int amount){
    balance+=amount;
}

// debot
void Debit(int amount){
    if(balance>=amount){
        balance-=amount;
        cout <<  "Withdraw succsfull \n ";
    } else {
        cout << "Insufficent balance \n" ;
    }
}



};
int main() {
    Account accounts[3];

    for(int i=0;i<3;i++) {
            accounts[i].InputDetails() ;
    }
    accounts[1].setBalance(100);
    int a;
    cin >>a ;
    for(int i=0;i<3;i++) {
        if(accounts[i].getAN()==a){
            int m;
            cin >>m;
           accounts[i].Debit(m); 
        }
        }
    

}