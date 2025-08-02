#ifndef SCIFI_H
#define SCIFI_H
#include "movie.h"

class SciFiMovie : public Movie {
private:
    int techLevel;
    bool hasAliens;
    int futureYear;
public:
    SciFiMovie(string t = "", int d = 1, int m = 1, int y = 2000, double r = 0.0, int tl = 1, bool ha = false, int fy = 2000);
    ~SciFiMovie() override;
    void displayDetails() const override;
    double calculateScore() const override;
    string getGenre() const override;
    void showTechAnalysis() const;
    void simulateFutureScenario() const;
    SciFiMovie* getAsSciFiMovie() override;
    void setTechLevel(int tl);
    void setHasAliens(bool ha);
    void setFutureYear(int fy);
    int getTechLevel() const;
    bool getHasAliens() const;
    int getFutureYear() const;
};
#endif