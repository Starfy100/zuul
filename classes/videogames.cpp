#include <iostream>
#include <string.h>
#include "videogames.h"
#include "media.h"

using namespace std;

int videogames::gettype(){
  return 3;
}
char* videogames::getpublisher(){
  return publisher;
}
char* videogames::setpublisher(char* user){
  publisher = user;
}
int videogames::getrating(){
  return rating;
}
int videogames::setrating(int user){
  rating = user;
}
