#include "action.h"
#include <iostream>
using namespace std;

ActionMovie::ActionMovie(string t, int d, int m, int y, double r, char vl, int fs, bool hs) : Movie(t, d, m, y, r), violenceLevel(vl), noOfFightScenes(fs), hasStunts(hs) {
    if (violenceLevel != 'D' && violenceLevel != 'M' && violenceLevel != 'U') {
        violenceLevel = 'U';
    }
}
ActionMovie::~ActionMovie() {}
void ActionMovie::displayDetails() const {
    cout << "Genre: Action, Title: " << getTitle() << ", Release Date: ";
    getReleaseDate().displayDate();
    cout << ", Rating: " << getRating();
    if (getDirector()) {
        cout << ", Director: ";
        getDirector()->displayDirector();
    }
    cout << ", Violence Level: " << violenceLevel << ", Fight Scenes: " << noOfFightScenes
         << ", Has Stunts: " << (hasStunts ? "Yes" : "No") << endl;
}
double ActionMovie::calculateScore() const {
    int multiplier = noOfFightScenes > 7 ? 2 : noOfFightScenes;
    return fmod(getRating() * getDaysSinceRelease() * multiplier / countExplosions(), 10.0);
}
string ActionMovie::getGenre() const { 
    return "Action"; 
}
int ActionMovie::countExplosions() const { 
    return noOfFightScenes > 5 ? 8 : 2; 
}
void ActionMovie::assessCensorship() const {
    if (violenceLevel == 'D') cout << "violence" << endl;
    else if (violenceLevel == 'M') cout << "Mafia" << endl;
    else cout << "Ultra Cool" << endl;
}
void ActionMovie::stuntCoordinatorReport() const {
    if (hasStunts && noOfFightScenes >= 5 && noOfFightScenes <= 10) {
        cout << "Very cool" << endl;
    } else {
        cout << "Might be boring" << endl;
    }
}
void ActionMovie::setViolenceLevel(char vl) { 
    if (vl == 'D' || vl == 'M' || vl == 'U') {
        violenceLevel = vl;
    } 
}
void ActionMovie::setNoOfFightScenes(int fs) { 
    noOfFightScenes = fs; 
}
void ActionMovie::setHasStunts(bool hs) { 
    hasStunts = hs; 
}
char ActionMovie::getViolenceLevel() const { 
    return violenceLevel; 
}
int ActionMovie::getNoOfFightScenes() const { 
    return noOfFightScenes; 
}
bool ActionMovie::getHasStunts() const { 
    return hasStunts; 
}
ActionMovie* ActionMovie::getAsActionMovie() {
    return this;
}