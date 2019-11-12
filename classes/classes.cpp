#include <iostream>
#include <vector>
#include <iterator>
#include <iomanip>
#include "media.h"
#include "movies.h"
#include "music.h"
#include "videogames.h"

using namespace std;

/*
Author: Nick F.
Database that includes Video Games, Music and Movies
Records title, year, publisher and rating for Video Games
Records title, artist, year, duration and publisher for Music
Records title, director, year, duration and rating for Movies
Program has an "Add", "Search", "Delete" and "Quit functionality"
"Add" adds media and records corresponding information
"Search" filters by name or year and then prints all items that match
"Delete" deletes the first item that user declares

Thanks to Panda and Mr. Galbraith for the help

Start date: 10/17/2019
 */

void add(vector<media*>*v){
  int mediatype = 1;


  // media* a = new media();
  cout << "What kind of media is this? (movie: 1, music: 2 or video game: 3)" << endl;



  cin >> mediatype;

  if (mediatype == 1){

    cout << "Adding a movie to the database" << endl;
    cout << "Enter Title" << endl; //asks for movie title
    char* title = new char[20];
    movie* a = new movie();
    cin >> title;
    cin.get();
    a->settitle(title);
    
    // string* title;
    // media* a = new media(title);
    cout << "Enter year (YYYY)" << endl; //asks for movie year
    int year;
    cin >> year;
    cin.get();
    a->setyear(year);
    
    char* director = new char[20];
    cout << "Enter director" << endl; //asks for movie director
    cin >> director;
    cin.get();
    a->setdirector(director);

    int duration;
    cout << "Enter duration (Minutes)" << endl; //asks for movie duration
    cin >> duration;
    cin.get();
    a->setduration(duration);

    int rating;
    cout << "Enter rating (Percent)" << endl; //asks for movie rating
    cin >> rating;
    cin.get();
    a->setrating(rating);

    v->push_back(a); //stores movie info
  }
  
  if (mediatype == 2){

    cout << "Adding a song to the database" << endl;
    cout << "Enter Title" << endl; //asks for music title
    char* title = new char[20];
    music* a = new music();
    cin >> title;
    cin.get();
    a->settitle(title);
    
    cout << "Enter year (YYYY)" << endl; //asks for music year
    int year;
    cin >> year;
    cin.get();
    a->setyear(year);
    
    char* artist = new char[20];
    cout << "Enter artist" << endl; //asks for music artist
    cin >> artist;
    cin.get();
    a->setartist(artist);

    int duration;
    cout << "Enter duration (Minutes)" << endl; //asks for music duration
    cin >> duration;
    cin.get();
    a->setduration(duration);

    char* publisher = new char[20];
    cout << "Enter publisher" << endl; //asks for music publisher
    cin >> publisher;
    cin.get();
    a->setpublisher(publisher);

    v->push_back(a); //stores music info   
  }
  
  if (mediatype == 3){

    cout << "Adding a video game to the database" << endl;
    cout << "Enter Title" << endl; //asks for game title
    char* title = new char[20];
    videogames* a = new videogames();
    cin >> title;
    cin.get();
    a->settitle(title);
    
    cout << "Enter year (YYYY)" << endl; //asks for game year
    int year;
    cin >> year;
    cin.get();
    a->setyear(year);
    
    int rating;
    cout << "Enter rating (Percent)" << endl; //asks for game rating
    cin >> rating;
    cin.get();
    a->setrating(rating);

    char* publisher = new char[20];
    cout << "Enter publisher" << endl; //asks for game publisher
    cin >> publisher;
    cin.get();
    a->setpublisher(publisher);

    v->push_back(a); //stores game info
  }



}


void search(vector<media*>*v){

  cout << "Do you want to search by title(1) or year(2)?" << endl;
  char input;
  cin >> input;
  cin.get();
  cout << input << endl;
  
  if (input == '1'){ //search by title
    cout << "Enter title" << endl;
    char tput[20];
    cin >> tput;
    cin.get();
    cout << tput << endl;

   
    vector<media*>::iterator ptr;


    for (ptr = v-> begin(); ptr < v->end(); ptr++) {
      if (strcmp(tput, (*ptr)->gettitle()) == 0){ //if the title matches, proceed to print
  
	
	cout << "title: " << (*ptr)->gettitle() << "|";
	cout << "year: " << (*ptr)->getyear() << "|";
	
	if((*ptr)->gettype() == 1){ //prints movie specific data
	  cout << "director: " << static_cast<movie*>(*ptr)->getdirector() << "|";
	  cout << "rating: " << static_cast<movie*>(*ptr)->getrating() << "|";
	  cout << "duration: " << static_cast<movie*>(*ptr)->getduration() << " ";
	  cout << endl;
	}
	
	
	else if((*ptr)->gettype() == 2){ //prints music specific data
	  cout << "artist: " << static_cast<music*>(*ptr)->getartist() << "|";
	  cout << "publisher: " << static_cast<music*>(*ptr)->getpublisher() << "|";
	  cout << "duration: " << static_cast<music*>(*ptr)->getduration() << " ";
	  cout << endl;
	}
	
	
	else if((*ptr)->gettype() == 3){ //prints video game specific data
	  cout << "publisher: " << static_cast<videogames*>(*ptr)->getpublisher() << "|";
	  cout << "rating: " << static_cast<videogames*>(*ptr)->getrating() << " ";
	  cout << endl;
	}
      }
    }
  }

  if (input == '2'){ //search by year
    cout << "Enter year" << endl;
    int yput;
    cin >> yput;
    cin.get();
    cout << yput << endl;

    vector<media*>::iterator ptr;
    for (ptr = v-> begin(); ptr < v->end(); ptr++) {
      if(yput == (*ptr)->getyear()){ //if the year matches, proceed to print

	cout << "title: " << (*ptr)->gettitle() << "|";
	cout << "year: " << (*ptr)->getyear() << "|";
	
	if((*ptr)->gettype() == 1){ //prints movie specific data
	  cout << "director: " << static_cast<movie*>(*ptr)->getdirector() << "|";
	  cout << "rating: " << static_cast<movie*>(*ptr)->getrating() << "|";
	  cout << "duration: " << static_cast<movie*>(*ptr)->getduration() << " ";
	  cout << endl;
	}
	
	
      else if((*ptr)->gettype() == 2){ //prints music specific data
	cout << "artist: " << static_cast<music*>(*ptr)->getartist() << "|";
	cout << "publisher: " << static_cast<music*>(*ptr)->getpublisher() << "|";
	cout << "duration: " << static_cast<music*>(*ptr)->getduration() << " ";
	cout << endl;
      }
	
	
      else if((*ptr)->gettype() == 3){ //prints video game specific data
	cout << "publisher: " << static_cast<videogames*>(*ptr)->getpublisher() << "|";
	cout << "rating: " << static_cast<videogames*>(*ptr)->getrating() << " ";
	cout << endl;
      }
      }
    }
    
  }
}


void del(vector<media*>*v){
  cout << "Do you want to delete by title(1) or year(2)?" << endl;
  char input;
  char lastcall;
  cin >> input;
  cin.get();
  cout << input << endl;
 vector<media*>::iterator ptr;
  
  if (input == '1'){ //delete by title
    cout << "Enter title" << endl;
    char tput[20];
    cin >> tput;
    cin.get();
    cout << tput << endl;
    
    
    //    vector<media*>::iterator ptr;
    //    cout << "Are you sure you want to delete this item?" << endl;

    for (ptr = v-> begin(); ptr < v->end(); ptr++) {
      if (strcmp(tput, (*ptr)->gettitle()) == 0){ //if the title matches, proceed to delete
  
	
	cout << "title: " << (*ptr)->gettitle() << "|";
	cout << "year: " << (*ptr)->getyear() << "|";
	
	if((*ptr)->gettype() == 1){ //prints movie specific data
	  cout << "director: " << static_cast<movie*>(*ptr)->getdirector() << "|";
	  cout << "rating: " << static_cast<movie*>(*ptr)->getrating() << "|";
	  cout << "duration: " << static_cast<movie*>(*ptr)->getduration() << " ";
	  cout << endl;
	}
       
	
	else if((*ptr)->gettype() == 2){ //prints music specific data
	  cout << "artist: " << static_cast<music*>(*ptr)->getartist() << "|";
	  cout << "publisher: " << static_cast<music*>(*ptr)->getpublisher() << "|";
	  cout << "duration: " << static_cast<music*>(*ptr)->getduration() << " ";
	  cout << endl;
	}
	
	
	else if((*ptr)->gettype() == 3){ //prints video game specific data
	  cout << "publisher: " << static_cast<videogames*>(*ptr)->getpublisher() << "|";
	  cout << "rating: " << static_cast<videogames*>(*ptr)->getrating() << " ";
	  cout << endl;
	}


      
	cout << "y or n" << endl;
	cin >> lastcall;
	cin.get();
	
	if (lastcall == 'y'){
	    
	      delete *ptr;
	      ptr = v->erase(ptr);

	      cout << "deleting" << endl;
	       
	}	
      }
    }
  }

  

  if (input == '2'){ //delete by year
    cout << "Enter year" << endl;
    int yput;
    cin >> yput;
    cin.get();
    cout << yput << endl;
    
    
    //    vector<media*>::iterator ptr;
    cout << "Are you sure you want to delete these items?" << endl;

    for (ptr = v-> begin(); ptr < v->end(); ptr++) {
      if (yput == (*ptr)->getyear() ){ //if the year matches, proceed to delete
  
	
	cout << "title: " << (*ptr)->gettitle() << "|";
	cout << "year: " << (*ptr)->getyear() << "|";
	
	if((*ptr)->gettype() == 1){ //prints movie specific data
	  cout << "director: " << static_cast<movie*>(*ptr)->getdirector() << "|";
	  cout << "rating: " << static_cast<movie*>(*ptr)->getrating() << "|";
	  cout << "duration: " << static_cast<movie*>(*ptr)->getduration() << " ";
	  cout << endl;
	}
	
	
	else if((*ptr)->gettype() == 2){ //prints music specific data
	  cout << "artist: " << static_cast<music*>(*ptr)->getartist() << "|";
	  cout << "publisher: " << static_cast<music*>(*ptr)->getpublisher() << "|";
	  cout << "duration: " << static_cast<music*>(*ptr)->getduration() << " ";
	  cout << endl;
	}
	
	
	else if((*ptr)->gettype() == 3){ //prints video game specific data
	  cout << "publisher: " << static_cast<videogames*>(*ptr)->getpublisher() << "|";
	  cout << "rating: " << static_cast<videogames*>(*ptr)->getrating() << " ";
	  cout << endl;
	}
     
  
    cout << "y or n" << endl;
    cin >> lastcall;
    cin.get();
    
    if (lastcall == 'y'){

      
      delete *ptr;
      ptr = v->erase(ptr);
      
      cout << "deleting" << endl;
      }
      }
    }
    
  }

}



int main() {
  bool running = true;
  char user;
  vector<media*>*v = new vector <media*>;

  
  while (running == true) {
    cout << "Commands are 'q' 'a' 's' and 'd' " << endl;
    cin >> user;
    cin.get();
    if (user == 'q') {
      running = false;
    }
    if (user == 'a') {
      add(v);
    }
    if (user == 's') {
      search(v);
    }
    if (user == 'd') {
      del(v);
    }

  }
}
