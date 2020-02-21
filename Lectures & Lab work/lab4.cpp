#include <iostream>
using namespace std;

int main() {

  //1 USD PRICE
  float yen   = 107.08, 
        euro  = 0.91, 
        peso  = 19.73;
  
  //CONVERSION VARIABLES
  double converted;
  float amount;
  string userSelection;

  //ASK THE USER FOR THE CONVERSION AMOUNT
  cout << "Enter the Amount of USD You Want to Convert" << endl;
  cin >> amount; //GET USER'S INPUT
  //CHECK IF THE ENTERED AMOUNT IS NOT ZERO, THEN 
  if (amount != 0) {
    //ASK THE USER TO CHOOSE FROM THE MENU FOR CONVERSION
    cout << "Choose the Conversion Currency -> \t Y: YEN |\t E: Euro |\t P: Peso " << endl;
    cin >> userSelection; // GET USER'S SELECTION FOR THE CURRENCY

    //RUN CONDITIONS BASED ON USER'S CURRENCY SELECTION 
    if (userSelection == "Y" || userSelection == "y") {
      //CONVERT THE AMOUNT BY MULTIPLYTING IT WITH THE BASE PRICE/VALUE
      converted = amount * yen;
      //PRINT THE RESULT TO THE CONSOLE FOR THE USER
      cout << amount << "-$ is \t " << converted << " Yens" << endl;
    } 
      else if ( userSelection == "E" || userSelection == "e") {
        converted = amount * euro;
        cout << amount << "-$ is \t " << converted << " Euros" << endl;
      }   
        else if (userSelection == "P" || userSelection == "p") {
          converted = amount * peso;
          cout << amount << "-$ is \t " << converted << " Pesos" << endl;
        }

  //IF THE USER INDEED PUT A ZERO VALUE
  } else {
    //TELL THE USER THAT GET OUT OF THE KIOSK!! :D 
    cout << "Sorry! Not Enough Funds" << endl;
  }
  

  return 0;
}