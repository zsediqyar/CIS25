#include <iostream>
#include <math.h>
using namespace std;


int main () {

int size = 100;
int nums[size];
int min = 1;
int max = 100;
int newmin, newmax, mid;
int key;
bool found = false;

for(int i = 0; i < size; i++) {
  nums[i] = rand() % 100;
}
for(int i = 0; i < size; i++) {
  cout << nums[i] << "\t";
}
cout << endl << endl;
cout << "Enter a Number to Search using Binary Search Algorithm" << endl;
cin >> key;


while(found != true) {
  mid = max / 2;
  if(key == mid) {
    found = true;
    cout << "The number is the middle though" << endl;
    break;
  } else if(key != mid && key > mid) {
    newmax = max;
    newmin = mid;
    for (int i = newmin; i <= newmax; i++) {
      if(key == nums[i]) {
        found = true;
        cout << "Found it in the upper 50!" << endl;
        break;
      }
    }
  } else if (key != mid && key < mid) {
    newmax = mid;
    newmin = min;
    for (int i = min; i <= newmax; i++) {
      if(key == nums[i]) {
        found = true;
        cout << "Found it in the bottom 50" << endl;
        break;
      }
    }
  } else { cout << "No Such Number in the Array" << endl; }
}

  return 0;
}