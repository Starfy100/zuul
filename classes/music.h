#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class music: public media {
 public:
  int gettype();

  char* getartist();
  char* setartist(char* user);

  char* getpublisher();
  char* setpublisher(char* user);
  
  int getduration();
  int setduration(int user);
 
 private:
  char* artist;
  char* publisher;
  int duration;
  int type;
};

#endif
