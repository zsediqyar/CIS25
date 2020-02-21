#include <iostream>
#include "currency.h"
#include "menu.h"
using namespace std;

int main() {
  double amount;
  char userInput;
  double exchangeResult;

  Currency currency;
  Menu menu;

  while(userInput != 'q' || userInput != 'Q') {
    cout << "Enter USD Amount to Exchange" << endl;
    cin >> amount;
    if(amount <= 0) { 
      cout << "Insufficient Funds, exiting..." << endl; 
      break;
    } else {
      currency.setUsd(amount);
    }
    menu.getMenu();
    cin >> userInput; 
    exchangeResult = currency.change(userInput);
    if(userInput == 'y' || userInput == 'Y') {
      cout << amount << " USD, Is: " << exchangeResult 
      << " Yens" << endl << endl;
    }
    if(userInput == 'p' || userInput == 'P') {
      cout << amount << " USD, Is: " << exchangeResult 
      << " Pesos" << endl << endl;
    }
    if(userInput == 'e' || userInput == 'E') {
      cout << amount << " USD, Is: " << exchangeResult 
      << " Euros" << endl << endl;
    }
    if(userInput == 'q' || userInput == 'Q') {
      cout << "Exiting..." << endl;
      break;
    }
  }

  return 0;
}