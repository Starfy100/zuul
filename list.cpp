#include <iostream>
#include <vector>
#include <iterator>

/*
Author: Nicolas F.
Student List: Program will be able to add, print and remove the name, id number and gpa 
of a student
GPA will be recorded to two decimal points
Program will exit with "q"

Thanks to Mr. Galbraith and Panda for the help with vectors/pointers
Start Date: 9/30/2019
 */

using namespace std;

struct Student {
  char firstname[10];
  char lastname[10];
  int id;
  float gpa;
};

void add(vector<Student*>*v) {
  //"add" function of the program, reads in first/last name, id and gpa, then stores to vector

  Student* a = new Student();
  cout << "Enter student first name" << endl;
  cin >> a->firstname;
  cin.get();
  
  cout << "Enter student last name" << endl;
  cin >> a->lastname;
  cin.get();
  
  cout << "Enter student id" << endl;
  cin >> a->id;
  cin.get();
  
  cout << "Enter student gpa" << endl;
  cin >> a->gpa;
  cin.get();
  v->push_back(a);
}

void del(vector<Student*>*v) {
  //"delete" function of the program, deletes a student from the vector based on their id
  int deleteid;
   cout << "Enter the id of the student you would like to delete" << endl;
   cin >> deleteid;
   cin.get();

   for( vector<Student*>::iterator it = v->begin(); it !=v->end(); it++) {
     if((*it)->id == deleteid) {
       v->erase(it);
       break;
     }
   }
}

void print(vector<Student*>*v) {
  //"print" function of the program, prints all students in the vector  
  vector<Student*>::iterator ptr; 
  for (ptr = v->begin(); ptr < v->end(); ptr++){
    cout << "Name: " << (*ptr)->firstname << " " << (*ptr)-> lastname << endl;
    cout << "ID: " << (*ptr)->id << endl;
    cout << "GPA: " << (*ptr)->gpa << endl;
  }
      
}

int main() { //reads in the user input and executes the given command
  bool running = true;
  char user;
  vector<Student*>*v = new vector<Student*>;
  while (running == true){
    
    cin.get(user);
    cin.get();
    if (user == 'p') { //user types 'p' to Print
      print(v);
    }
    if (user == 'd') { //user types 'd' to Delete
      del(v);
    }
    if (user == 'a') { //user types 'a' to Add
      add(v);
    }
    if (user == 'q') { //user types 'q' to Quit
      running = false;
    }
    else {
      cout << "Available commands are: p, d, a or q" << endl;
      cout << "(Print, Delete, Add or Quit)" << endl;
    }
 
  }
  return 0;
}
