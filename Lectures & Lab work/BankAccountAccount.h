#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
  private:
    float balance = 1000;
    vector<float>depsArray;
    vector<float>withdArray;
  
  public:
    //deposit into account
    void deposit(float x) {
      float newBalance;
      balance += x;
      newBalance = balance;
      depsArray.push_back(x);
    }
    //withdraw from the account;
    void withdraw(float y) {
      float newBalance;
      balance -= y;
      newBalance = balance;
      withdArray.push_back(y);
    }
    //output the account balance
    float getBalance() {
      return balance;
    } 
    //output all deposits
    void printDeposits() {
      cout << "Here are the deposits: " << endl;
      for(int i = 0; i < depsArray.size(); i++) {
        cout << "[" << i << "] - " << depsArray[i] << endl;
      }
    }
    //output all withdraws
    void printWithdraws() {
      cout << "Here are the withdraws: " << endl;
      for(int i = 0; i < withdArray.size(); i++) {
        cout << "[" << i << "] - " << withdArray[i] << endl;
      }
    }
};