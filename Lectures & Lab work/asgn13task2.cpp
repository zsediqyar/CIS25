#include <iostream>
using namespace std;

class Currency {
  private:
    double yen = 1.5;
    double euro = 2.5;
    double peso = 3.5;
    double usd;
  public:
  Currency(double amount, char userSelection) {
    usd = amount;
    if(userSelection == 'y') {
      getUsdToYen();
    }
  }
    void setUsd(double d) { usd = d;}
    double getUsdToYen() {
      return yen * usd;
    }
    double getUsdToPeso() {
      return peso * usd;
    }
    double getUsdToEuro() {
      return euro * usd;
    }
};

int main () {

// Currency currency;

char userReply;
double amount, result;

cout << "enter amount" << endl;
cin >> amount;
cout << "Select: y, p, e" << endl;
cin >> userReply;

Currency(amount, userReply);
Currency currency;
cout << currency.getUsdToYen();

  return 0;
}