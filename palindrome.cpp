#include <iostream>
#include <cstring>
#include <stdlib.h>
/*
Nicolas F.
Palindrome: Program will read in a user input  of up to 80 characters
Program will determine if the string is a palindrome and will output accordingly

Logic help recieved from Tejash Panda

9/13/19
*/


using namespace std;

int main() {
  int a = 0; //place in second array
  int b = 0; //place in first array
  int c = 0; //ascii value of second array chars
  char str[80]; //initial character array
  char str2[80]; //condensed character array
  char str3[80]; //reversed character array
  for (int i = 0; i < 80; i++) { //clears each array of any astray data
    str[i] = 35;
    str2[i] = 0;
    str3[i] = 0;
  }


  cout << "Enter Text" << endl;
  cin.get(str, 80); 
  cin.get();

  for (int i = 0; i < 80; i++) {
    //for loop removes spaces/special characters/numbers
    //turns all letters into their lowercase variants
    if (str[i] >= 97 && str[i] <= 122 ) {
        str2[a] = str[i];
	//cout << str << endl;
	//cout << str2 << endl;
	
	a++;
    }
    else if (str[i] >= 65 && str[i] <= 90) {
      str[i] = str[i] + 32;
      str2[a] = str[i];
      a++;
      // cout << str << endl;
      // cout << str2 << endl;
      
    }
      else {
      str[i] = 32;
      //cout << "skip" << endl; 
      } 

  }

  for (int i = a-1; i > -1; --i) { //writes the second array in reverse to the third array
    
    // cout << "i: " << i << endl;
    // cout << "b: " << b << endl;
    // cout << "str2: " << str2[b] << endl;
      str3[i] = str2[b];
      str3[a] = '\0';
      b++;
      //  cout << "str3: " << str3[i] << endl;
      // cout << endl;
  }


  cout << "Original: " << str2 << endl;
  cout << "Reversed: " << str3 << endl;
  
  if (strcmp(str2, str3) == 0 ){ //compares the second and third arrays
    cout << "This is a palindrome!" << endl;
  }
  else {
    cout << "This is NOT a palindrome." << endl;
      }

  return 0;
}
