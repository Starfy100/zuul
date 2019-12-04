#include <iostream>
#include <string.h>
#include "items.h"

using namespace std;

char* items::getname(){
  return name;
}
char* items::getdescription(){
  return description;
}
char* items::setname(char* user){
  name = user;
}
char* items::setdescription(char* user){
  description = user;
}
			  
