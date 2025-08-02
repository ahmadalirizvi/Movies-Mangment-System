#include "director.h"
#include <iostream>
using namespace std;

Director::Director(string f, string l, int exp, string nat) : name(f, l), experienceYears(exp), nationality(nat) {}
void Director::setDirector(string f, string l, int exp, string nat) {
    name.setName(f, l);
    experienceYears = exp;
    nationality = nat;
}
void Director::displayDirector() const {
    cout << "Director: ";
    name.displayName();
    cout << ", Experience: " << experienceYears << " years, Nationality: " << nationality;
}
Name Director::getName() const { 
    return name; 
}
int Director::getExperienceYears() const { 
    return experienceYears; 
}
string Director::getNationality() const { 
    return nationality; 
}
Director::~Director() {}