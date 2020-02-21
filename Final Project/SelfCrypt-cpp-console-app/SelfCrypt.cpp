#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "Encryption.h"
#include "Menu.h"

using namespace std;

int main() {
//LOCAL CHARACTER ARRAY TO STORE KEY
char keyArray[2];
//USER SELECTION OF THE MENU
int menuSelection;
//USER INPUT FOR THE KEY AS STRING
string keyInput;
//USER INPUT FOR THE BODY OF THE MESSAGE/TEXT
string textInput;
//USER INPUT FOR CREATING FILE INPUT FILE STREAM
string fileName;
//VARIABLE FOR STORING THE ENCRYPTION/DECRYPTION DATA
string result;

//OBJECT INSTANCE OF THE CIPHER CLASS
Cipher cipher;
//OBJECT INSTANCE OF THE MENU CLASS
Menu menu;

//SHOW PROGRAM HEADER FROM THE MENU CLASS
menu.header();
//CREATE GOTO FOR PROGRAM RESTART
restart:
//SHOW THE MAIN SELECTION MENU
menu.mainMenu();
//GET THE USER INPUT FOR MENU SELECTION
cin >> menuSelection;
//IF THE USER SELECTS CONSOLE ENCRYPTION
if(menuSelection == 1) {
  //CLEAR THE INPUT STREAM BUFFER FROM PREVIOUS DATA
  cin.ignore(1 ,'\n');
  //PROMPT THE USER WHICH OPTION HE/SHE SELECTED
  cout << "You Chose Console-based Encryption/Decryption" << endl << endl;
  //ASK THE USER TO WRITE HIS MESSAGE IN THE CONSOLE
  cout << "Enter Your Text Below: " << endl;
  //GET THE USER MESSAGE UNTIL THE END
  getline(cin, textInput);
  //ASK THE USER FOR A TWO CHARACTER KEY
  cout << "Enter Your Key: \t";
  //STORE THE KEY IN THE VARIABLE
  cin >> keyInput;
  //COPY THE KEY TO THE ARRAY
  menu.copyKeyToArray(keyInput, keyArray);
  //SET THE KEY TO THE CLASS ARRAY
  cipher.setKey(keyArray);
  //ENCRYPT THE TEXT AND DISPLAY THE RESULT
  result = cipher.encDec(textInput);
  //DISPLAY TO USER THE ENCRYPTED TEXT
  cout << "Your Text has been Encrypted as below: " << endl << endl;
  //DISPLAY RESULT
  cout << result << endl << endl;
  //ASK USER IF HE/SHE WANTS TO FURTHER CONTINUE
  menu.continueMsg();
  //GET THE USER SELECTION
  cin >> menuSelection;
  //IF USER WANTS TO CONTINUE
  if(menuSelection == 1) {
    //GO TO THE CREATED GOTO
    goto restart;
  } else if(menuSelection == 2) {
    cout << endl;
    cout << "Thank You! GoodBye." << endl;
    exit(0);
  } else {
    cout << "Wrong Input! Exiting..." << endl;
  }
}

//IF THE USER SELECTS FILE ENCRYPTION
if (menuSelection == 2) {
  //TELL THE USER ABOUT HIS/HER SELECTION
  cout << "You Chose File-based Encryption/Decryption" << endl << endl;
  //ASK THE USER FOR THE NAME OF THE FILE TO BE ENCRYPTED OR DECRYPTED
  cout << "Enter Your File Name: \t";
  //STORE THE FILE NAME WITH EXTENSION
  cin >> fileName;

  //CREATE FILE STREAM WITH THE USER ENTERED FILE NAME
  ifstream infile (fileName);
  //OPEN THE FILE AND COPY IT TO THE LOCAL VARIABLE
  if(infile.is_open()) {
    while(!infile.eof()) {
      //COPY THE CONTENT OF THE FILE
      getline(infile, textInput);
    }
    //CLOSE THE FILE
    infile.close();
  }

  //GET THE ENCRYPTION/DECRYPTION KEY FROM THE USER
  cout << "Write Your Key: ";
  //STORE IT IN A VARIABLE
  cin >> keyInput;

  //COPY THE KEY TO THE LOCAL ARRAY
  menu.copyKeyToArray(keyInput, keyArray);
  //COPY THE LOCAL ARRAY TO THE CLASS ARRAY
  cipher.setKey(keyArray);
  //ENCRYPT OR DECRYPT THE CONTENT AND SAVE IT IN THE LOCAL VARIABLE OF RESULT
  result = cipher.encDec(textInput);
  //CREATE OUTPUT STREAM WITH A FILE NAME
  ofstream outfile("output.text");
  //WRITE IT OUT IN AN OUTPUT FILE 
  outfile << result;
  //CLOSE THE OUTPUT STREAM
  outfile.close();
  //TELL THE USER THE FILE HAS BEEN ENCRYPTED/DECRYPTED
  cout << "The file has been proccessed and a file with the name 'output.text' has been created in the same directory" << endl << endl;
  //ASK THE USER IF HE/SHE WANTS TO CONTINUE
  menu.continueMsg();
  //GET THE USER SELECTION
  cin >> menuSelection;
  //IF THE USER WANTS TO CONTINUE
  if(menuSelection == 1) {
    //TAKE HIM/HER TO THE CREATED GOTO
    goto restart;
  } else if(menuSelection == 2) {
    cout << endl;
    cout << "Thank You! GoodBye." << endl;
    exit(0);
  } else {
    cout << "Wrong Input! Exiting..." << endl;
  }
}
  return 0;
}