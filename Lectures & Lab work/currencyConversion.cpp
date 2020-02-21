#include <iostream>
using namespace std;

int main () {

  char userMenu;
  float usdInput;
  float yen = 108.19;
  float peso = 19.44;
  float euro = 0.91;
  float result;

  cout << "Please Enter The Amount" << endl;
  cin >> usdInput;

  if(usdInput != 0) {
    cout << "Please Selection The Conversion Currency" << endl;
    cout << "E: Euro \t|\t P: Peso \t|\t Y: Yen" << endl;
    cin >> userMenu;

    switch(userMenu) {
      case 'E': result = usdInput * euro;
                cout << usdInput << " USD is " << result << " Euros" << endl;
          break;
      case 'P': result = usdInput * peso;
                cout << usdInput << " USD is " << result << " Pesos" << endl;
          break;
      case 'Y': result = usdInput * yen;
                cout << usdInput << " USD is " << result << " Yens" << endl;
          break;
      default: cout << "Invalid Entry" << endl;
    }

  } else {
    cout << "Insufficient Funds" << endl;
  }

  return 0;
}