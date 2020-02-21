#include <iostream>
using namespace std;

//CREATE A CLASS CIPHER
class Cipher {
  //PRIVATE MEMBER ARRAY FOR STORING ENC/DEC KEY AS CHAR
  private: 
    char key[2];
  //PUBLIC METHODS
  public:
  //GETTING THE KEY FROM THE USER AND UPDATING THE PRIVATE MEMBER DATA
    void setKey(char k[]) {
      for(int i = 0; i < 2; i++) {
        key[i] = k[i];
      }
    }

    //METHOD FOR ENCRYPTION AND DECRYPTION ALIKE
    string encDec(string toCipher) {
      string output = toCipher;
      for (int i = 0; i < toCipher.size(); i++)
        output[i] = toCipher[i] ^ key[i % (sizeof(key) / sizeof(char))];
      return output;
    }
};