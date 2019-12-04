#include <iostream>
#include <string.h>
#include <vector>
#include <iterator>
#include "rooms.h"

using namespace std;

rooms::rooms(){
  roomitems = new vector<items*>();
}
void rooms::setexits(map<char*, rooms*>* user){
  exits = user;
}
map<char*, rooms*>* rooms::getexits(){
  return exits;
}
vector<items*>* rooms::getitems(){
  return roomitems;
}
void rooms::setitems(items* newitems){
  roomitems->push_back(newitems);
}
char* rooms::getdescription(){
  return description;
}
char* rooms::getname(){
  return name;
}
char* rooms::setname(char* user){
  name = user;
}
char* rooms::setdescription(char* user){
  description = user;
}
