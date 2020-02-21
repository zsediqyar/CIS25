#include <iostream>
using namespace std;

class Menu {
  public:
    void header() {
      cout << "***********************************************" << endl;
      cout << "\tWELCOME TO THE SELFCRYPT PROGRAM  \t" << endl;
      cout << "-----------------------------------------------" << endl;
      cout << "\tYou can use this program to ENCRYPT  \t" << endl;
      cout << "\tand DECRYPT your personal messages  \t" << endl;
      cout << "\tand emails with your own selected KEY  \t" << endl;
      cout << "------------------------------------------------" << endl;
    } 
    void mainMenu() {
      cout << "+--------------- CHOOSE YOUR OPTION -------------+" << endl;
      cout << "|\t1 - ENCRYPT | DECRYPT:\t using the Console \t |" << endl;
      cout << "|\t2 - ENCRYPT | DECRYPT:\t using a Text File \t |" << endl;
      cout << "+------------------------------------------------+" << endl;
      cout << "Enter: \t";
    }

    void fileName() {
      cout << endl;
      cout << "Enter File Name with Extension \nPlease use a .txt file (the file should be in the same directory as the program)" << endl;
      cout << "Enter: \t";
    }

    void errorMsg() {
      cout << endl;
      cout << "INVALID! Key Shall Be 2 Characters Only" << endl;
    }

    void copyKeyToArray(string s, char k[]) {
      for(int i = 0; i < s.length(); i++) {
        k[i] = toupper(s[i]);
      }
    }

    void continueMsg() {
      cout << endl;
      cout << "Do You Want to Continue? (1- Yes | 2- No)" << endl;
      cout << "Enter: \t";
    }
    
    bool keyMatches(string key) {
      int count = 0;
      bool result;
      for (int i = 0; i < key.length(); i++) {
        count++;
        if (count < 2 || count > 2) {
          result = false;
        }
        if (count == 2) {
          result = true;
        }
      }
      return result;
    }

};