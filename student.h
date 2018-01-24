#include <iomanip>
#include <iostream>
#include <cstring>

#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student {
 protected:
  int id;
  char* fName[100];
  char* lName[100];
  float gpa;

 public:
  int getID();
  char* getfName();
  char* getlName();
  float getGPA();
  //constructor
  Student(char _fName[100], char _lName[100], int _id, float _gpa);
};

#endif
