#include <iostream>
#include <math.h>

using namespace std;

int main () {
  int sampleArray[10];
  int newArray[20];

  //FILL THE ARRAY
  for (int i = 0; i < 10; i++) {
    sampleArray[i] = rand() % 1000;
  }

  //COPY THE ARRAY;
  for (int i = 0; i < 20; i++) {
    newArray[i] = sampleArray[i];
    if(newArray[i] > 1000 || newArray[i] < 0) {
      newArray[i] = 0;
    }
  }
  cout << "SAMPLE ARRAY " << endl;
  //SAMPLE ARRAY 
  for(int i = 0; i < 10; i++) {
    cout << sampleArray[i] << " ";
  }
  cout << endl;

  cout << "NEW ARRAY " << endl;
  //NEW ARRAY 
  for(int i = 0; i < 20; i++) {
    cout << newArray[i] << " ";
  }
  cout << endl;

  return 0;
}