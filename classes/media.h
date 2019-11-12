#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>

using namespace std;

 class media {
 public:
  virtual int gettype();
   int getyear();
   int setyear(int user);
   char* gettitle();
   char* settitle(char* user);
  
 private:
   char* title;
   int year;
   int type;
};

#endif
