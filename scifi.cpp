#include "scifi.h"
#include <iostream>
using namespace std;

SciFiMovie::SciFiMovie(string t, int d, int m, int y, double r, int tl, bool ha, int fy) : Movie(t, d, m, y, r), techLevel(tl), hasAliens(ha), futureYear(fy) {
    if (techLevel < 1 || techLevel > 3) {
        techLevel = 1;
    }
}
void SciFiMovie::displayDetails() const {
    cout << "Genre: SciFi, Title: " << getTitle() << ", Release Date: ";
    getReleaseDate().displayDate();
    cout << ", Rating: " << getRating();
    if (getDirector()) {
        cout << ", Director: ";
        getDirector()->displayDirector();
    }
    cout << ", Tech Level: " << techLevel << ", Has Aliens: " << (hasAliens ? "Yes" : "No") << ", Future Year: " << futureYear << endl;
}
double SciFiMovie::calculateScore() const {
    return fmod(getRating() * getDaysSinceRelease() * techLevel, 10.0);
}
string SciFiMovie::getGenre() const { 
    return "SciFi"; 
}
void SciFiMovie::showTechAnalysis() const {
    cout << "Tech Analysis: " << (calculateScore() > 7 ? "Awesome" : "Not so awesome") << endl;
}
void SciFiMovie::simulateFutureScenario() const {
    if (calculateScore() > 7 && hasAliens && futureYear > getReleaseDate().getYear()) {
        cout << "Future is bright" << endl;
    } else {
        cout << "Future is not so bright" << endl;
    }
}
void SciFiMovie::setTechLevel(int tl) { 
    if (tl >= 1 && tl <= 3) {
        techLevel = tl; 
    }
}
void SciFiMovie::setHasAliens(bool ha) { 
    hasAliens = ha; 
}
void SciFiMovie::setFutureYear(int fy) { 
    futureYear = fy; 
}
int SciFiMovie::getTechLevel() const { 
    return techLevel; 
}
bool SciFiMovie::getHasAliens() const { 
    hasAliens; 
}
int SciFiMovie::getFutureYear() const { 
    return futureYear; 
}
SciFiMovie* SciFiMovie::getAsSciFiMovie() { 
    return this; 
}
SciFiMovie::~SciFiMovie() {}