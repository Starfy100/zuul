#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

int media::gettype(){
  return 0;
}

char* media::gettitle(){
  return title;
}
char* media::settitle(char* user){
  title = user;

}

int media::setyear(int user){ //year in YYYY format
  year = user;
}

int media::getyear(){
  return year;
}
