#ifndef NAME_H
#define NAME_H
#include <string>
using namespace std;

class Name {
private:
    string firstName, lastName;
public:
    string getFirstName() const;
    string getLastName() const;

    void setName(string f, string l);
    Name(string f = "", string l = "");
    virtual ~Name();
    void displayName() const;
};
#endif
