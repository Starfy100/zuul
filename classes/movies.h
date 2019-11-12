#ifndef MOVIE_H
#define MOVIE_H


#include <iostream>
#include <string.h>
#include "media.h"


using namespace std;

class movie: public media {
 public:
  int gettype();
  
  char*getdirector();
  char* setdirector(char* user);
  int getrating();
  int setrating(int user);
  int getduration();
  int setduration(int user);

 private:
  char* director;
  int rating;
  int duration;
  int type; 

};

#endif
