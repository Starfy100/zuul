#include <iostream>


using namespace std;

/*
Author: Nick F.
Database that includes Video Games, Music and Movies
Records title, year, publisher and rating for Video Games
Records title, artist, year, duration and publisher for Music
Records title, director, year, duration and rating fro Movies
Program has an "Add", "Search", "Delete" and "Quit functionality"
"Search" filters by name or year
"Delete" deletes the first item that matches the user defined title or year

Start date: 10/17/2019
 */


int main() {
  bool running = true;
  char user;

  while (running == true) {
    cin.get(user);
    cin.get();
    if (user == 'q') {
      running = false;
    }
    cout << "testing" << endl;


  }
  return 0;
}
