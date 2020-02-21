#include <iostream>
#include <vector>
#include "BankAccountAccount.h"
#include "BankAccountMenu.h"

using namespace std;

int main () {
int userSelection;
char userInput;
float amount;

BankAccount account;
Menu menu;

while(userSelection != 6) {
  menu.main();
  cin >> userSelection;
  if (userSelection == 1) {
    cout << "Enter The Amount for Deposit: \t";
    cin >> amount;
    account.deposit(amount);
  }
  else if (userSelection == 2) {
    cout << "Enter The Amount to Withdraw: \t";
    cin >> amount;
    account.withdraw(amount);
  } 
  else if (userSelection == 3) {
    cout << "Current Balance Is: \t" << account.getBalance() << endl;
  }
  else if (userSelection == 4) {
    account.printDeposits();
  }
  else if (userSelection == 5) {
    account.printWithdraws();
  }
  else if (userSelection == 6) {
    cout << "Exiting The Program ..." << endl;
    break;
  }
}


  return 0;
}