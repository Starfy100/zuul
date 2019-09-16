#include <iostream>
#include <cstdlib>
#include <ctime>

/*

Nicolas F.
Guessing Game: Program will randomly generate a number between 0-100 
Program will tell the user if their guesses are too high or too low
At the end of the game, program will display number of guesses and
prompt the user to restart or exit

9/9/19
*/



using namespace std;

int game = 1; //keeps track of game being on or off
int input = 0;
int main()

{
  
  int guess = 0; //keeps track of guesses  

 srand(time(NULL));//sets the random seed
  
  
  while (game == 1) {
    int random = rand()%100; //generates the random number
    guess = 0;

    while (input != random) {
      guess++; //increases the guesses counter
      cout << "Please enter a number" << endl;
      cin >> input;


      
       if (input > random) { //if your guess is too high... 
	  cout << "too high!" << endl;
	}
       if (input < random) { //if your guess is too low...
	  cout << "too low!" << endl;
	}    

    }


    //if the guess is correct, ask to play again
	cout << "you guessed right!" << endl;
	cout << "it took you: " << guess << " tries" << endl;
 
	
       cout << "do you want to play again? 1/0"<< endl;
       cout << "type 1 for yes or 0 for no" << endl;
	  //asks to play again, if yes: restart/if no: end
       cin >> input;
       cout << input << endl;


       if (input == 1){
	 cout << "restarting..." << endl;
	 }

       if (input == 0) {
	 game = 0;
       }
 

    
  }
  
}


