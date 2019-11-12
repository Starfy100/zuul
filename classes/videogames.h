#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class videogames: public media {
 public:
  int gettype();
  
  char* getpublisher();
  char* setpublisher(char* user);
  
  int getrating();
  int setrating(int user);
 private:
  char* publisher;
  int rating;
  int type;
};
#endif
