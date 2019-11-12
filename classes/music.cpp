#include <iostream>
#include <string.h>
#include "music.h"
#include "media.h"
using namespace std;

int music::gettype(){
  return 2;
}
char* music::getartist(){
  return artist;
}
char* music::setartist(char* user){
  artist = user;
}
char* music::getpublisher(){
  return publisher;
}
char* music::setpublisher(char* user){
  publisher = user;
}
int music::getduration(){ //duration in minutes
  return duration;
}
int music::setduration(int user){
  duration = user;
}
