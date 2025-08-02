#ifndef ACTION_H
#define ACTION_H
#include "movie.h"

class ActionMovie : public Movie {
private:
    char violenceLevel;
    int noOfFightScenes;
    bool hasStunts;
protected:
    void setViolenceLevel(char vl);
    void setNoOfFightScenes(int fs);
    void setHasStunts(bool hs);
    char getViolenceLevel() const;
    int getNoOfFightScenes() const;
    bool getHasStunts() const;
public:
    ActionMovie(string t = "", int d = 1, int m = 1, int y = 2000, double r = 0.0, char vl = 'U', int fs = 0, bool hs = false);
    ~ActionMovie() override;
    void displayDetails() const override;
    double calculateScore() const override;
    string getGenre() const override;
    int countExplosions() const;
    void assessCensorship() const;
    void stuntCoordinatorReport() const;
    ActionMovie* getAsActionMovie() override;

};
#endif