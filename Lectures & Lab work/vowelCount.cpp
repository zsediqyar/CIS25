#include <iostream>

using namespace std;

int main(){

int vowels;
int consonants;
int digits;
int spaces;
int marks;
char userInput[150];

vowels = consonants = digits = spaces = marks = 0;

cout << "Enter a text:" << endl;
cin.getline(userInput, 150);

for(int i = 0; userInput[i]!='\0'; ++i) {
    if(userInput[i]=='a' || userInput[i]=='e' 
        ||userInput[i]=='i' || userInput[i]=='o' 
        || userInput[i]=='u'  || userInput[i] == 'y'
        || userInput[i]=='A' || userInput[i]=='E' 
        || userInput[i]=='I' || userInput[i]=='O' 
        ||userInput[i]=='U'||userInput[i]=='Y' ) {
            ++vowels;
        }
        else if((userInput[i]>= 'a'&& userInput[i]<= 'z') || (userInput[i]>= 'A'&& userInput[i]<= 'Z')) {
            ++consonants;
        }
        else if(userInput[i]=='!' || userInput[i]=='@' 
        ||userInput[i]=='#' || userInput[i]=='$' 
        || userInput[i]=='%'  || userInput[i] == ';'
        || userInput[i]=='&' || userInput[i]=='*' 
        || userInput[i]==',' || userInput[i]=='.' 
        ||userInput[i]=='='||userInput[i]=='?'
        ||userInput[i]=='+'||userInput[i]=='-'
        ||userInput[i]=='/'||userInput[i]=='('
        ||userInput[i]==')'||userInput[i]=='{'
        ||userInput[i]=='}'||userInput[i]=='"'
        ||userInput[i]==':'||userInput[i]=='_' ) {
            ++marks;
        }
        else if(userInput[i]>='0' && userInput[i]<='9') {
            ++digits;
        }
        else if (userInput[i] ==' ') {
            ++spaces;
        }
        
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Marks: " << marks << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    
    return 0;
}