#include <iostream>
using namespace std;

int main() {

  //1 USD PRICE
  float yen   = 107.08, 
        euro  = 0.91, 
        peso  = 19.73;
  
  //CONVERSION VARIABLES
  double yenUsd, euroUsd, pesoUsd;

  float amount;

  cout << "Enter the amount of USD you want to convert to YEN | EURO | PESO" << endl;
  cin >> amount;

  yenUsd  = amount * yen;
  euroUsd = amount * euro;
  pesoUsd = amount * peso;

  cout << "Here are the conversions" << endl;
  cout << amount << "-$ equals: \t " << yenUsd << " YEN | " << euroUsd << " EURO | "   << pesoUsd << " PESO" << endl;



  return 0;
}