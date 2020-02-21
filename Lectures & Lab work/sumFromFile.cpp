#include<iostream>
#include<fstream>
using namespace std;

int main()
{   

    int nums[6];
    int sum;
    //INPUT FILE STREAM WITH THE TXT FILE
    ifstream NUMBERS("nums.txt");
    //CHECK IF THE FILE IS OPEN
    if(NUMBERS.is_open()) {
    //LOOP IN THE FILE UNTIL THE END IS REACHED
      while(! NUMBERS.eof()) {
        //WRITE THE CONTENT OF THE FILE IN THE ARRAY WITH A FOR LOOP
        for(int i = 0; i < 6; i++) {
          NUMBERS >> nums[i];
        }
      }
      //CLOSE THE FILE STREAM
      NUMBERS.close();
    }
    //DISPLAY THE FILE CONTENT AND SUM IT
    cout << "NUMS IN FILE: \t";
    for(int i = 0; i < 6; i++) {
    cout << nums[i] << " ";
    sum += nums[i];
  }

  cout << endl;
  cout << "SUM OF NUMS: \t";
  cout << sum << endl;
    //CREATE THE OUTPUT STREAM WITH THE TEXT FILE AND APPEND FLAG
    ofstream NUMS("nums.txt", std::ios_base::app);
    //CHECK IF THE FILE IS OPEN
    if(NUMS.is_open()) {
        //WRITE THE VALUE OF SUM IN THE FILE
        NUMS << "The Sum of Above Nums: \t" << sum;
        //CLOSE THE FILE
        NUMS.close();
    }

    return 0;
}