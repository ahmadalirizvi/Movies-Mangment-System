#include "name.h"
#include <iostream>
using namespace std;

Name::Name(string f, string l) : firstName(f), lastName(l) {}

void Name::setName(string f, string l){ 
    firstName = f; 
    lastName = l; 
}
void Name::displayName() const{
     cout << firstName << " " << lastName; 
    }
string Name::getFirstName() const{
     return firstName; 
    }
string Name::getLastName() const{
     return lastName; 
    }
Name::~Name() {}

