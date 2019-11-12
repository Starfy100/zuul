#include <iostream>
#include <string.h>
#include "movies.h"
#include "media.h"

using namespace std;

int movie::gettype(){
  return 1;
}

char* movie::getdirector(){
  return director;
}
char* movie::setdirector(char* user){
  director = user;
}


int movie::getduration(){ //duration in minutes
  return duration;
}

int movie::setduration(int user){
  duration = user;
}

int movie::getrating(){ //rating in percent
  return rating;
}

int movie::setrating(int user){
  rating = user;
}
