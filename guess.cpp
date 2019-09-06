#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int game = 1; //keeps track of game being on or off
int input;
int main()

{
  
  // int game = 1;
  int guess = 0; //keeps track of guesses  

 srand(time(NULL));//sets the random seed
 int random = rand()%100; //generates random number
  
  
   while (game == 1) {
      guess++;

      cout << random << endl;
      // cout << "game in progress";
      // cout << guess;
      cin >> input;
      

      
       if (input == random) { //win condition
	cout << "you guessed right!" << endl;
	cout << "it took you: " << guess << " tries" << endl;
	game = 0;


	if (game = 0) {
	  cout << "do you want to play again?"
	  //ask to play again
	}
       }
      
       if (input > random) { //if your guess is too high... 
	  cout << "too high!" << endl;
	}
       if (input < random) { //if your guess is too low...
	  cout << "too low!" << endl;
	}
      

    }
  
  return 0;
  
}


