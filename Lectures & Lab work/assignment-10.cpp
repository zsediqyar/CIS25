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

//HIGHEST VALUE
int highestVal(int arr[], int size) {
  int high = 0;
  for (int i = 0; i < size; i++) {
    if(arr[i] > high) {
      high = arr[i];
    }
  }
  return high;
}

//LOWEST VALUE
int lowestVal(int arr[], int size) {
  int low = 1000;
  for (int i = 0; i < size; i++) {
    if(arr[i] < low) {
      low = arr[i];
    }
  }
  return low;
}

//FIND INDEX OF HIGHEST OR LOWEST
int findIndex(int arr[], int key, int size) {
  int index;
  for (int i = 0; i < size; i++) {
    if(key == arr[i]) {
      index = i;
    }
  }

  return index;
}

//SORT THE ARRAY USING BUBBLE SORT
void sortArray(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main () {

//1000 ELEMENT ARRAY MADE WITH MATH.RANDOM
int userInput;
char userResp;
int thousandNums [1000];
  for(int i = 0; i < 1000; i++) {
    thousandNums[i] = rand() % 1000;
  }
int size = sizeof(thousandNums) / sizeof(thousandNums[0]);
int middleIndex = size / 2;
int middleValue = thousandNums[middleIndex];
int firstIndex = thousandNums[0];
int firstValue = thousandNums[firstIndex];
int lastIndex = thousandNums[size - 1];
int lastValue = thousandNums[lastIndex];

do {
  restart:
  cout << "WHAT DO YOU WANT TO DO? " << endl; 
  cout << "Enter 1. Output all integer values: " << endl;
  cout << "Enter 2. Sum all odd numbers: " << endl;
  cout << "Enter 3. Sum all even numbers: " << endl;
  cout << "Enter 4. Enter a search value: " << endl;
  cout << "Enter 5: Show the Middle value: " << endl;
  cout << "Enter 6: Show the first value: " << endl;
  cout << "Enter 7: Show the last value: " << endl;
  cout << "Enter 8: Show the highest value and location: " << endl;
  cout << "Enter 9: Show the lowest value and location: " << endl;
  cout << "Enter 10: Sort the Array: " << endl;
  cout << "Enter 11: Exit: " << endl;
  cout << "-------------------------------------------- \n";
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
    cout << "------------------------------------" << endl;
    cout << "THE MIDDLE VALUE: \t" << middleValue << " at INDEX [" << middleIndex << "]" <<endl;
    cout << "------------------------------------" << endl;
    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      exit(0);
    }
  }
  else if(userInput == 6) {
    cout << "------------------------------------" << endl;
    cout << "THE FIRST VALUE: \t" << firstValue << " at INDEX [" << firstIndex << "]" <<endl;
    cout << "------------------------------------" << endl;
    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      exit(0);
    }
  }
  else if(userInput == 7) {
    cout << "------------------------------------" << endl;
    cout << "THE LAST VALUE: \t" << lastValue << " at INDEX [" << lastIndex << "]" <<endl;
    cout << "------------------------------------" << endl;
    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      exit(0);
    }
  }
  else if(userInput == 8) {
    int size = sizeof(thousandNums) / sizeof(thousandNums[0]);
    int highestValue = highestVal(thousandNums, size);
    int index = findIndex(thousandNums, highestValue, size);
    cout << "------------------------------------" << endl;
    cout << "HIGHEST VALUE: \t" << highestValue << " AT INDEX [" << index << "]" << endl;  
    cout << "------------------------------------" << endl;


    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      exit(0);
    }
  }

    else if(userInput == 9) {
    int size = sizeof(thousandNums) / sizeof(thousandNums[0]);
    int lowestValue = lowestVal(thousandNums, size);
    int index = findIndex(thousandNums, lowestValue, size);
    cout << "------------------------------------" << endl;
    cout << "LOWEST VALUE: \t" << lowestValue << " AT INDEX [" << index << "]" << endl;  
    cout << "------------------------------------" << endl;


    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      exit(0);
    }
  }

  else if(userInput == 10) {
    sortArray(thousandNums, size);
    for(int i = 0; i < size; i++) {
      cout << thousandNums[i] << "\t";
    }
    cout << endl;

    cout << "Do you Want to Continue? (y/n) " << endl;
    cin >> userResp;
    if(userResp == 'y' || userResp == 'Y') {
      goto restart;
    } else {
      exit(0);
    }
  }

  else if(userInput == 11) {
    cout << "Exiting..." << endl;
    break;
  }
} while (userInput != 11);

  return 0;
}