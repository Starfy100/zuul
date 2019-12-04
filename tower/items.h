#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
#include <string.h>

using namespace std;

class items {
 public:
  char* getname();
  char* getdescription();
  char* setname(char* user);
  char* setdescription(char* user);

 private:
  char* name;
  char* description;

};

#endif
