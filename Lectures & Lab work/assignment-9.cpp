#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//PRINT INT FUNCTION
void printNums(int arr[]) {
  for(int i = 0; i < 1000; i++) {
    cout << arr[i] << "\t";
  }
}

//SUM ODD NUMS FUNCTION
int sumOddNums(int arr[]) {
  int result;
  for(int i = 0; i < 1000; i++) {
    if(arr[i] % 2 != 0) {
      result = result + arr[i];
    }
  }
  return result;
}
//SUM EVEN NUMS FUNCTION
int sumEvenNums(int arr[]) {
  int result;
  for(int i = 0; i < 1000; i++) {
    if(arr[i] % 2 == 0) {
      result = result + arr[i];
    }
  }
  return result;
}
//SEARCH INT IN THE ARRAY FUNCTION
int searchNums(int arr[], int key) {
  int location;
  for(int i = 0; i < 1000; i++) {
    if(key == arr[i]) {
      location = i;
      break;
    }
  }
  return location;
}

int main () {

//1000 ELEMENT ARRAY MADE WITH MATH.RANDOM
int userInput;
char userResp;
int thousandNums [1000];
for(int i = 0; i < 1000; i++) {
  thousandNums[i] = rand() % 1000;
}

do {
  restart:
  cout << "WHAT DO YOU WANT TO DO? " << endl; 
  cout << "Enter 1. Output all integer values: " << endl;
  cout << "Enter 2. Sum all odd numbers: " << endl;
  cout << "Enter 3. Sum all even numbers: " << endl;
  cout << "Enter 4. Enter a search value: " << endl;
  cout << "Enter 5: Exit: " << endl;
  cin >> userInput;

  if(userInput == 1) {
    printNums(thousandNums);
    cout << " " << endl;
    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      cout << "Exiting..." << endl;
      exit(0);
    }
  }
  else if(userInput == 2) {
    cout << "------------------------------------" << endl;
    cout << "THE SUM OF ODD NUMBERS: \t" << sumOddNums(thousandNums) << endl;
    cout << "------------------------------------" << endl;
    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      exit(0);
    }
  }
  else if (userInput == 3) {
    cout << "------------------------------------" << endl;
    cout << "THE SUM OF EVEN NUMBERS: \t" << sumEvenNums(thousandNums) << endl;
    cout << "------------------------------------" << endl;
    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      cout << "Exiting..." << endl;
      exit(0);
    }
  }
  else if (userInput == 4) {
    int key;
    int result;
    cout << "Enter an Integer to Search In the Array: \t";
    cin >> key;
    result = searchNums(thousandNums,key);
    if(result >= 0) {
      cout << "------------------------------------" << endl;
      cout << "FOUND THE NUMBER " << endl;
      cout << "It is in Index [" << result << "]" << endl;
      cout << "------------------------------------" << endl;
    }
    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      cout << "Exiting..." << endl;
      exit(0);
    } 
  }
  else if(userInput == 5) {
    cout << "Exiting..." << endl;
    break;
  }
} while (userInput != 5);

  return 0;
}