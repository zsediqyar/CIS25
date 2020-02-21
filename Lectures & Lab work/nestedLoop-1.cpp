#include <iostream>
using namespace std;

int main() {
  
for (int i = 1; i < 2; i++) {
  cout << " " << i;
  cout << endl;
  if(i == 1) {
    for (int j = 1; j < 3; j++) {
      cout << " " << j;
      if(j == 2) {
        cout << endl;
        for (int k = 1; k < 4; k++) {
          cout << " " << k;
          if(k == 3) {
            cout << endl;
            for (int l = 1; l < 5; l++) {
              cout << " " << l;
              if(l == 4) {
                cout << endl;
                for (int m = 1; m < 6; m++) {
                  cout << " " << m;
                  if(m == 5) {
                    cout << endl;
                    for (int n = 1; n < 7; n++) {
                      cout << " " << n;
                      if(n == 6) {
                        cout << endl;
                        for (int o = 1; o < 8; o++) {
                          cout << " " << o;
                          if(o == 7) {
                            cout << endl;
                            for (int z = 1; z < 9; z++) {
                              cout << " " << z;
                            }
                            cout << endl;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
  
  return 0;
}