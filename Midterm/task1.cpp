#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//PRINT INT FUNCTION
void fillArray(int arr[]) {
  for(int i = 0; i < 1000; i++) {
    arr[i] = rand() % 1000;
  }
}


//SEARCH INT IN THE ARRAY FUNCTION
void searchBday(int arr[], int key) {
  int location;
  int counter;
  for(int i = 0; i < 1000; i++) {
    if(key == arr[i]) {
      location = i;
      if(arr[i] == key > 1) {
        counter++;
      }
    }
  }
  cout << "Location of the " << key << " is at index [" << location << "]" << endl;
  cout << "And the count is " << counter << endl;
}

//DIVISBLE NUMBERS FUNCTION
void divisible(int arr[]) {
  for(int i = 0; i < 1000; i++) {
    if((arr[i] % 3 == 0) || (arr[i] % 5 == 0)) {
      cout << arr[i] << "\t";
    }
  }
}
int main () {

int randomNumbers[1000];
fillArray(randomNumbers);

// searchBday(randomNumbers, 15);
cout << "The numbers below are divisible by both 3 & 5" << endl;
cout << endl;
divisible(randomNumbers);



  return 0;
}