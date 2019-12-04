#ifndef ROOMS_H
#define ROOMS_H

#include <iostream>
#include <string.h>
#include <map>
#include "items.h"

using namespace std;

class rooms {
 public:
  rooms();
  map<char*, rooms*>* getexits();
  void setexits(map <char*, rooms*>* user); 
  vector<items*>* getitems();
  void setitems(items* roomitems);

  char* getdescription();
  char* getname();
  char* setname(char* user);
  char* setdescription(char* user);

 private:
  map<char*, rooms*>* exits;
  vector<items*>* roomitems;

  char* description;
  char* name;
};


#endif
