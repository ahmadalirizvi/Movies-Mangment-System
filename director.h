#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "name.h"

class Director {
private:
    Name name;
    int experienceYears;
    string nationality;
public:
    void setDirector(string f, string l, int exp, string nat);
    Name getName() const;
    int getExperienceYears() const;
    string getNationality() const;

    Director(string f = "", string l = "", int exp = 0, string nat = "");
    virtual ~Director();
    void displayDirector() const;
};
#endif