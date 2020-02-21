#include <iostream>
#include <cstdlib>

void swap(int arr[], int size) {
   int temp = arr[1];
    arr[1] = arr[size - 2];
    arr[size - 2] = temp;
}

using namespace std;

int main () {

int nums[10];

for(int i = 0; i < 10; i++) {
  nums[i] = rand() % 10;
}
int size = sizeof(nums) / sizeof(nums[0]);

cout << "ARRAY ELEMENTS" << endl;
cout << "---------------------" << endl;
for(int i = 0; i < 10; i++) cout << nums[i] << " ";
cout << endl;
cout << "---------------------" << endl;
cout << "BEFORE SWAPPING" << endl;
cout << "---------------------" << endl;
cout <<"Second Element: \t" << "[" << nums[1] << "]" << endl;
cout <<"Second Last Element: \t" << "[" << nums[size - 2] << "]" << endl;

cout << endl;
cout << "---------------------" << endl;
cout << "AFTER SWAPPING" << endl;
cout << "---------------------" << endl;
swap(nums, size);
cout <<"Second Element: \t" << "[" << nums[1] << "]" << endl;
cout <<"Second Last Element: \t" << "[" << nums[size - 2] << "]" << endl;


  return 0;
}