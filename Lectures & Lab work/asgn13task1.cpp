#include <iostream>
using namespace std;

class Currency {
  private:
    double yen = 1.5;
    double euro = 2.5;
    double peso = 3.5;
    double usd;
  public:
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

Currency currency;

char userReply;
double amount, result;

while(userReply != 'q' || userReply != 'Q') {
  cout << "Enter The Amount" << endl;
  cin >> amount;
  if(amount <= 0) {
  cout << "Insufficient Amount" << endl;
  break;
  } else {
    currency.setUsd(amount);
  }
  cout << "Y: Yen \t P: Peso \t E: Euro" << endl;
  cout << "Select A Currency for Exchange" << endl;
  cin >> userReply;
  if(userReply == 'y' || userReply == 'Y') {
    result = currency.getUsdToYen();
    cout << endl;
    cout << "["<< amount << "] USD => [" << result << "] Yen" << endl;
    cout << endl;
  }
  else if(userReply == 'e' || userReply == 'E') {
    result = currency.getUsdToEuro();
    cout << endl;
    cout << "["<< amount << "] USD => [" << result << "] Euro" << endl;
    cout << endl;
  }
  else if(userReply == 'p' || userReply == 'P') {
    result = currency.getUsdToPeso();
    cout << endl;
    cout << "["<< amount << "] USD => [" << result << "] Peso" << endl;
    cout << endl;
  }
  else if 
  (
    userReply != 'y' || userReply != 'Y' ||
    userReply != 'e' || userReply != 'E' ||
    userReply != 'p' || userReply != 'P'
  ) {
    cout << "Wrong Selection...Exiting" << endl;
    break;
  }
}


  return 0;
}