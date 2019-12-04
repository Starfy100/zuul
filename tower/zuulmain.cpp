#include <iostream>
#include <vector>
#include <iterator>
#include "rooms.h"
#include "items.h"

/*
Written by: Ned F.

Zuul: text based adventure game
Contains at least 15 rooms, each with their own descriptions, items and exits
Contains at least 5 items
Items can be picked up and put into a player inventory
Items can be dropped from player inventory and added to a room
Program has a win and quit condition
Thanks to Panda and Mr. Galbraith for the help

Start date: 11/12/19
*/


using namespace std;


void setup(vector<rooms*>*r, vector<items*>*i){ //setup of room data and item data

  char* name = new char[30];
  char* description = new char[1000];
  
  rooms* room0 = new rooms();
  strcpy(name, "holding area");
  strcpy(description, "test");
  room0->setname(name);
  room0->setdescription(description);
  r->push_back(room0);

  name = new char[30];
  description = new char[1000];
  rooms* room1 = new rooms();
  strcpy(name, "tower plaza");
  strcpy(description, "you are in the tower plaza");
  room1->setname(name);
  room1->setdescription(description);
  r->push_back(room1);

  name = new char[30];
  description = new char[1000];
  name = new char[30];
  description = new char[1000];
  rooms* room2 = new rooms();
  strcpy(name, "vaults");
  strcpy(description, "you are next to the vaults");
  room2->setname(name);
  room2->setdescription(description);
  r->push_back(room2);
  
  name = new char[30];
  description = new char[1000];
  rooms* room3 = new rooms();
  strcpy(name, "tower walk");
  strcpy(description, "you are at the tower walk");
  room3->setname(name);
  room3->setdescription(description);
  r->push_back(room3);

  name = new char[30];
  description = new char[1000];
  rooms* room4 = new rooms();
  strcpy(name, "postmaster");
  strcpy(description, "you are next to the postmaster");
  room4->setname(name);
  room4->setdescription(description);
  r->push_back(room4);

  name = new char[30];
  description = new char[1000];
  rooms* room5 = new rooms();
  strcpy(name, "overlook");
  strcpy(description, "you are at the overlook");
  room5->setname(name);
  room5->setdescription(description);
  r->push_back(room5);

  name = new char[30];
  description = new char[1000];
  rooms* room6 = new rooms();
  strcpy(name, "bounty tracker");
  strcpy(description, "you are next to the bounty tracker");
  room6->setname(name);
  room6->setdescription(description);
  r->push_back(room6);

  name = new char[30];
  description = new char[1000];
  rooms* room7 = new rooms();
  strcpy(name, "stairwell");
  strcpy(description, "you are in the tower stairwell");
  room7->setname(name);
  room7->setdescription(description);
  r->push_back(room7);

  name = new char[30];
  description = new char[1000];
  rooms* room8 = new rooms();
  strcpy(name, "crucible hallway");
  strcpy(description, "you are in the crucible hallway");
  room8->setname(name);
  room8->setdescription(description);
  r->push_back(room8);

  name = new char[30];
  description = new char[1000];
  rooms* room9 = new rooms();
  strcpy(name, "vanguard hall");
  strcpy(description, "you are in the vanguard hall");
  room9->setname(name);
  room9->setdescription(description);
  r->push_back(room9);

  name = new char[30];
  description = new char[1000];
  rooms* room10 = new rooms();
  strcpy(name, "gunsmith");
  strcpy(description, "you are next to the gunsmith");
  room10->setname(name);
  room10->setdescription(description);
  r->push_back(room10);

  name = new char[30];
  description = new char[1000];
  rooms* room11 = new rooms();
  strcpy(name, "cryptarch");
  strcpy(description, "you are next to the cryptarch");
  room11->setname(name);
  room11->setdescription(description);
  r->push_back(room11);

  name = new char[30];
  description = new char[1000];
  rooms* room12 = new rooms();
  strcpy(name, "hangar hallway");
  strcpy(description, "you are in the hangar hallway");
  room12->setname(name);
  room12->setdescription(description);
  r->push_back(room12);

  name = new char[30];
  description = new char[1000];
  rooms* room13 = new rooms();
  strcpy(name, "tower hangar");
  strcpy(description, "you are in the tower hangar");
  room13->setname(name);
  room13->setdescription(description);
  r->push_back(room13);

  name = new char[30];
  description = new char[1000];
  rooms* room14 = new rooms();
  strcpy(name, "shipwright");
  strcpy(description, "you are next to the shipwright");
  room14->setname(name);
  room14->setdescription(description);
  r->push_back(room14);

  name = new char[30];
  description = new char[1000];
  rooms* room15 = new rooms();
  strcpy(name, "future war cult lounge");
  strcpy(description, "you are in the future war cult lounge");
  room15->setname(name);
  room15->setdescription(description);
  r->push_back(room15);

  name = new char[30];
  description = new char[1000];
  rooms* room16 = new rooms();
  strcpy(name, "dead orbit");
  strcpy(description, "you are next to the dead orbit corner");
  room16->setname(name);
  room16->setdescription(description);
  r->push_back(room16);

  name = new char[30];
  description = new char[1000];
  rooms* room17 = new rooms();
  strcpy(name, "tower bar");
  strcpy(description, "you are in the tower bar, xur is standing in the corner");
  room17->setname(name);
  room17->setdescription(description);
  r->push_back(room17);

  name = new char[30];
  description = new char[1000];
  rooms* room18 = new rooms();
  strcpy(name, "eververse");
  strcpy(description, "you are next to the eververse store");
  room18->setname(name);
  room18->setdescription(description);
  r->push_back(room18);

  name = new char[30];
  description = new char[1000];
  rooms* room19 = new rooms();
  strcpy(name, "tower north");
  strcpy(description, "you are in the tower north");
  room19->setname(name);
  room19->setdescription(description);
  r->push_back(room19);

  name = new char[30];
  description = new char[1000];
  rooms* room20 = new rooms();
  strcpy(name, "kiosks");
  strcpy(description, "you are next to the tower kiosks");
  room20->setname(name);
  room20->setdescription(description);
  r->push_back(room20);

  name = new char[30];
  description = new char[1000];
  rooms* room21 = new rooms();
  strcpy(name, "speaker's chambers");
  strcpy(description, "you are in the speaker's chambers");
  room21->setname(name);
  room21->setdescription(description);
  r->push_back(room21);
  
  name = new char[30];
  description = new char[1000];
  rooms* room22 = new rooms();
  strcpy(name, "new monarchy corner");
  strcpy(description, "you are next to the new monarchy corner");
  room22->setname(name);
  room22->setdescription(description);
  r->push_back(room22);
  
  map <char*, rooms*>* tower = new map<char*, rooms*>();

  char* myeast = new char[5];
  strcpy(myeast, "east");
  char* mywest = new char[5];
  strcpy(mywest, "west");
  char* mynorth = new char[5];
  strcpy(mynorth, "north");
  char* mysouth = new char[5];
  strcpy(mysouth, "south");

  //room1 plaza exits  
   tower->insert(pair<char*, rooms*>(myeast, room2));//leads to vaults
   tower->insert(pair<char*, rooms*>(mynorth, room18));// leads to eververse
   tower->insert(pair<char*, rooms*>(mysouth, room11));// leads to cryptarch
   room1->setexits(tower);

   tower = new map<char*, rooms*>();
    //room2 vaults exits
     tower->insert(pair<char*, rooms*>(mywest, room1));//leads to plaza
     tower->insert(pair<char*, rooms*>(mynorth, room4));//leads to postmaster
     tower->insert(pair<char*, rooms*>(myeast, room3));//leads to towerwalk
     tower->insert(pair<char*, rooms*>(mysouth, room10));//leads to south
     room2->setexits(tower);

     tower = new map<char*, rooms*>();
 //room3 tower walk exits
     tower->insert(pair<char*, rooms*>(mywest, room2));//leads to vaults
     room3->setexits(tower);
   
    tower = new map<char*, rooms*>();
 //room4 postmaster exits
     tower->insert(pair<char*, rooms*>(mynorth, room5));//leads to overlook
     tower->insert(pair<char*, rooms*>(myeast, room6));//leads to bounty tracker
     tower->insert(pair<char*, rooms*>(mysouth, room2));//leads to vaults
     room3->setexits(tower);
     
tower = new map<char*, rooms*>();
 //room5 overlook exits
     tower->insert(pair<char*, rooms*>(mysouth, room4));//leads to postmaster
     room5->setexits(tower);

     tower = new map<char*, rooms*>();
      //room6 bounty tracker exits
     tower->insert(pair<char*, rooms*>(mywest, room4));//leads to postmaster
     tower->insert(pair<char*, rooms*>(mysouth, room10));//leads to stairwell
     room6->setexits(tower);

     tower = new map<char*, rooms*>();
     //room7 stairwell exits
     tower->insert(pair<char*, rooms*>(mynorth, room6));//leads to bounty tracker
     tower->insert(pair<char*, rooms*>(myeast, room8));//leads to crucible hallway
     room7->setexits(tower);

     tower = new map<char*, rooms*>();
     //room8 crucible hallway exits
     tower->insert(pair<char*, rooms*>(mywest, room7));//leads to stairwell
     tower->insert(pair<char*, rooms*>(myeast, room9));//leads to vanguard hall
     room8->setexits(tower);

     tower = new map<char*, rooms*>();
      //room9 vanguard hall exits
     tower->insert(pair<char*, rooms*>(mywest, room8));//leads to vaults
     room9->setexits(tower);

     tower = new map<char*, rooms*>();
      //room10 gunsmith exits
     tower->insert(pair<char*, rooms*>(mywest, room11));//leads to crpytarch
     tower->insert(pair<char*, rooms*>(mynorth, room2));//leads to vaults
     room10->setexits(tower);

     tower = new map<char*, rooms*>();
     //room11 cryptarch exits
     tower->insert(pair<char*, rooms*>(mynorth, room1));//leads to plaza
     tower->insert(pair<char*, rooms*>(myeast, room10));//leads to gunsmith
     tower->insert(pair<char*, rooms*>(mysouth, room12));//leads to hangar hallway
     room11->setexits(tower);

     tower = new map<char*, rooms*>();
      //room12 hangar hallway exits
     tower->insert(pair<char*, rooms*>(mynorth, room11));//leads to crpytarch
     tower->insert(pair<char*, rooms*>(mysouth, room13));//leads to tower hangar
     room12->setexits(tower);

     tower = new map<char*, rooms*>();
     //room13 tower hangar exits
     tower->insert(pair<char*, rooms*>(mynorth, room12));//leads to hangar hallway
     tower->insert(pair<char*, rooms*>(myeast, room14));//leads to shipwright
     room13->setexits(tower);

     tower = new map<char*, rooms*>();
      //room14 shipwright exits
     tower->insert(pair<char*, rooms*>(mywest, room13));//leads to tower hangar
     tower->insert(pair<char*, rooms*>(mynorth, room16));//leads to dead orbit
     tower->insert(pair<char*, rooms*>(myeast, room15));//leads to future war cult
     room14->setexits(tower);

     tower = new map<char*, rooms*>();
      //room15 fwc exits
     tower->insert(pair<char*, rooms*>(mywest, room14));//leads to shipwright
     room15->setexits(tower);

     tower = new map<char*, rooms*>();
      //room16 dead orbit exits
     tower->insert(pair<char*, rooms*>(mysouth, room14));//leads to shipwright
     tower->insert(pair<char*, rooms*>(myeast, room17));//leads to tower bar
     room16->setexits(tower);

     tower = new map<char*, rooms*>();
      //room17 tower bar exits
     tower->insert(pair<char*, rooms*>(mywest, room16));//leads to dead orbit
     room17->setexits(tower);

     tower = new map<char*, rooms*>();
      //room18 eververse exits
     tower->insert(pair<char*, rooms*>(mynorth, room19));//leads to tower north
     tower->insert(pair<char*, rooms*>(mysouth, room1));//leads to plaza
     room18->setexits(tower);

     tower = new map<char*, rooms*>();
      //room19 tower north exits
     tower->insert(pair<char*, rooms*>(mywest, room22));//leads to new monarchy
     tower->insert(pair<char*, rooms*>(mynorth, room21));//leads to speaker's chambers
     tower->insert(pair<char*, rooms*>(myeast, room20));//leads to kiosks
     tower->insert(pair<char*, rooms*>(mysouth, room18));//leads to eververse
     room19->setexits(tower);

     tower = new map<char*, rooms*>();
     //room20 tower kiosks exits
     tower->insert(pair<char*, rooms*>(mywest, room19));//leads to tower north
     room20->setexits(tower);

     tower = new map<char*, rooms*>();
      //room21 speaker's chambers exits
     tower->insert(pair<char*, rooms*>(mysouth, room19));//leads to tower north
     room21->setexits(tower);

     tower = new map<char*, rooms*>();
      //room22 new monarchy exits
     tower->insert(pair<char*, rooms*>(myeast, room19));//leads to tower north
     room22->setexits(tower);
     
     			    
  //room1 //plaza: north,south,east item: note
  //room2 //vaults: north,south,east,west no items
  //room3 //tower walk: west item: part2
  //room4 //postmaster: south,north,east no items
  //room5 //overlook: south no items
  //room6 //bounty tracker: west, south no items
  //room7 //stairwell: north,east no items
  //room8 //crucible hallway: west,east no items
  //room9 //vanguard hall: west item: part5
  //room10 //gunsmith: north,west item: part4
  //room11 //cryptarch: north,east,south no items
  //room12 //hangar hallway: north,south item: coin
  //room13 //tower hangar: north,east no items
  //room14 //shipwright: north,west,east no items (bring parts here to win)
  //room15 //fwc: west items: part3
  //room16 //dead orbit: south,east no items
  //room17 //tower bar: west item: letter (requires coin)
  //room18 //eververse: north,south no items
  //room19 //tower north: north,south,east,west no items
  //room20 //kiosks: west items: part1
  //room21 //speaker's chambers: south no items
  //room22 //new monarchy: east no items


     name = new char[30];
     description = new char[1000];
     items* part1 = new items();
     strcpy(name, "part1");
     strcpy(description, "a mysterious part labeled 1");
     part1->setname(name);
     part1->setdescription(description);
     //     i->push_back(part1);
     room20->setitems(part1);
     // room14->setitems(part1);
     
     name = new char[30];
     description = new char[1000];
     items* part2 = new items();
     strcpy(name, "part2");
     strcpy(description, "a mysterious part labeled 2");
     part2->setname(name);
     part2->setdescription(description);
     //i->push_back(part2);
     room3->setitems(part2);
     //room14->setitems(part2);
     
     name = new char[30];
     description = new char[1000];
     items* part3 = new items();
     strcpy(name, "part3");
     strcpy(description, "a mysterious part labeled 3");
     part3->setname(name);
     part3->setdescription(description);
     // i->push_back(part3);
     room15->setitems(part3);
     // room14->setitems(part3);
     
     name = new char[30];
     description = new char[1000];
     items* part4 = new items();
     strcpy(name, "part4");
     strcpy(description, "a mysterious part labeled 4");
     part4->setname(name);
     part4->setdescription(description);
     // i->push_back(part4);
     room10->setitems(part4);
     //room14->setitems(part4);
     
     name = new char[30];
     description = new char[1000];
     items* part5 = new items();
     strcpy(name, "part5");
     strcpy(description, "a mysterious part labeled 5");
     part5->setname(name);
     part5->setdescription(description);
     // i->push_back(part5);
     room9->setitems(part5);

     name = new char[30];
     description = new char[1000];
     items* coin = new items();
     strcpy(name, "coin");
     strcpy(description, "a strange coin, bring this to xur");
     coin->setname(name);
     coin->setdescription(description);
     //i->push_back(coin);
     room12->setitems(coin);

     name = new char[30];
     description = new char[1000];
     items* note = new items();
     strcpy(name, "note");
     strcpy(description, "a note that reads 'xur is in the tower bar!'");
     note->setname(name);
     note->setdescription(description);
     // i->push_back(note);
     room1->setitems(note);

     name = new char[30];
     description = new char[1000];
     items* letter = new items();
     strcpy(name, "letter");
     strcpy(description, "a letter that reads 'gather all five engine parts and drop them off at the shipwright'");
     letter->setname(name);
     letter->setdescription(description);
     // i->push_back(letter);
     room0->setitems(letter);
     

     //part1: "a mysterious part labeled 1"
     //part2: "a mysterious part labeled 2"
     //part3: "a mysterious part labeled 3"
     //part4: "a mysterious part labeled 4"
     //part5: "a mysterious part labeled 5"
     //coin: "a strange coin, bring these to xur"
     //note: "a note that reads 'xur is in the tower bar!'"
     //letter: "a letter that reads 'gather all five engine parts and drop them off at the shipwright   
}

void pick(vector<items*>*i, rooms* currentroom){//pick up items in a room
  //asks the user what they want to pick up
  cout << "what item do you want to pick up?" << endl;
  char item1[15];
  cin >> item1;
  cin.get();
  vector<items*>::iterator v;
  //runs through currentroom item vector to search for the item
  for(v = currentroom->getitems()->begin(); v != currentroom->getitems()->end(); v++){ 
    if (strcmp((*v)->getname(), item1) == 0) {
      
      i->push_back(*v); //add to inventory vector
      
      currentroom->getitems()->erase(v);  //remove from room item vector
      cout << "you picked up " << item1 << endl;
      break;
    }
    else {
      cout << "that item is not here" << endl;
    }
  }      
}

void drop(vector<items*>*i, rooms* currentroom){//drop item in a room
  cout << "what item do you want to drop?" << endl;
  char item2[15];
  cin >> item2;
  cin.get();
  vector<items*>::iterator v;
  for (v = i->begin(); v != i->end(); v++) {
    //    cout << "before if" << endl;
    if (strcmp((*v)->getname(), item2) == 0) {
      
      currentroom->getitems()->push_back(*v);//add to room item vector
      i->erase(v); //remove from inventory vector
      cout << "you dropped: " << item2 << endl;
      break;
    }
    else {
      cout << "that item is not in your inventory" << endl;
    }
  }
}

void walk(vector<rooms*>*r, rooms* &currentroom){//move to another room
  //asks the user which direction they want to go
  char user2[5];
  cout << "which direction do you want to go?" << endl;
  cin >> user2;
  cin.get();
  map<char*, rooms*>::iterator e;
  for(e = currentroom->getexits()->begin(); e != currentroom->getexits()->end(); e++) {
    if (strcmp(e->first, user2) == 0){
      //if the room has an exit that matches the input, change the currentroom
      currentroom = e->second;
      break;
    }
    else {
      cout << "there is no exit that way" << endl;
    }
  }
}


void winning(vector<rooms*>*r, vector<items*>*i, bool &running, int &letter){

  //checks if room 14 has all the parts in its item vector
  //also checks if room17 has a coin in its item vector
  //if room14 has all the parts, game is won
  //if room17 has a coin, letter is granted

  //status of each part in room14
  //0 = not present, 1 = present
  int part1 = 0;
  int part2 = 0;
  int part3 = 0;
  int part4 = 0;
  int part5 = 0;
  
vector<items*>::iterator p;
 for(p = r->at(14)->getitems()->begin(); p != r->at(14)->getitems()->end(); p++){ //searches room14 item vector

   if (strcmp((*p)->getname(), "part1" ) == 0){
     part1 = 1; //does room14 contains part1?
   }
   if (strcmp((*p)->getname(), "part2" ) == 0){
     part2 = 1; //part2?
   }
   if (strcmp((*p)->getname(), "part3" ) == 0){
     part3 = 1; //part3?
   }
   if (strcmp((*p)->getname(), "part4" ) == 0){
     part4 = 1; //part4?
   }
   if (strcmp((*p)->getname(), "part5" ) == 0){
     part5 = 1; //part5?
   }
 }
 //win condition
 //if all the parts are present, end the game
 if (part1 == 1 && part2 == 1 && part3 == 1 && part4 == 1 && part5 == 1) {
  cout << "You found all of the engine parts!" << endl;
  cout << "Now you can get back to adventuring." << endl;
  running = false;
 }

 
//checks room 17 item vector for the "coin" item
//if the room has it, give the user a letter
 vector<items*>::iterator c;
 for (c = r->at(17)->getitems()->begin(); c != r->at(17)->getitems()->end(); c++){
   if (strcmp((*c)->getname(), "coin") == 0){
     
     if (letter == 0){
       vector<items*>::iterator l;
       for (l = r->at(0)->getitems()->begin(); l != r->at(0)->getitems()->end(); l++){
	 if (strcmp((*l)->getname(), "letter") == 0){
	   
	   i->push_back(*l);
	   letter = 1;
	   cout << "xur gave you a letter" << endl;
	 }
       }
     }
   } 
 }
}

void inventory(vector<items*>*i){//opens inventory
  cout << "-----------------------------" << endl;
  cout << "your inventory items are: " << endl;
  //goes through inventory vector to print name and description
  vector<items*>::iterator it;
  for (it = i->begin(); it != i->end(); ++it) {
    cout << (*it)->getname() << ": ";
    cout << (*it)->getdescription() << endl;
    cout << "" << endl;
  }
  cout << "-----------------------------" << endl;
}

int main() {
  bool running = true;
  char user;
  int letter = 0; //does the player have the letter? 0 = no 
  vector<rooms*>*r = new vector <rooms*>; //room vector
  vector<items*>*i = new vector <items*>; //inventory vector

  setup(r, i);
  //sets name/description of rooms/items
  //sets exits of rooms and locations of items
  rooms* currentroom = r->at(1); //the user's current room

  while (running == true) {
    cout << "-----------------------------" << endl;
    cout << "What do you want to do?" << endl;
    cout << "Available commands are: Drop Item: 'd', Pick Up Item: 'p', Go: 'g', Inventory: 'i', Quit: 'q'" << endl;
    cout << "-----------------------------" << endl;
    cout << currentroom->getname() << endl;
    //prints currentroom name
    cout << currentroom->getdescription() << endl;
    //prints currentroom description

    //prints items in the room
    cout << "items in room: ";
    vector<items*>::iterator it;
    for(it = currentroom->getitems()->begin(); it != currentroom->getitems()->end(); it++){ 
      cout << (*it)->getname() << " ";
    }
    cout << endl;
    
    //prints out room exits
    map<char*, rooms*>::iterator rms;
    cout << "exits are: "; 
    for (rms = currentroom->getexits()->begin(); rms != currentroom->getexits()->end(); rms++) {
      cout << rms->first << " ";
    }
    cout << endl;
    
    cin >> user;
    cin.get();
    
    if (user == 'i'){ //inventory command
      inventory(i); 
    }
    else if (user == 'p'){ //pick item command
      pick(i, currentroom);
    }
    else if (user == 'd'){ //drop item command
      drop(i, currentroom);
    }
    else if (user == 'g'){ //go to room command
      walk(r, currentroom);
    }
    else if (user == 'q'){ //quit command
      cout << "quitting" << endl;
      running = false;
    }
    //checks if the player has won/if the player has a letter
    winning(r, i, running, letter);
 }
  return 0;
}
