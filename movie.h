#ifndef MOVIE_H
#define MOVIE_H
#include "date.h"
#include "director.h"

class AnimationMovie; 
class ActionMovie;
class SciFiMovie;

class Movie {
private:
    string title;
    Date releaseDate;
    double rating;
    Director* director;
public:
    int getReleaseYear() const; 
    void setTitle(string t);
    void setReleaseDate(int d, int m, int y);
    void setRating(double r);
    void setDirector(Director* d);
    string getTitle() const;
    Date getReleaseDate() const;
    double getRating() const;
    Director* getDirector() const;

    Movie(string t = "", int d = 1, int m = 1, int y = 2000, double r = 0.0);
    virtual ~Movie();
    virtual void displayDetails() const = 0;
    virtual double calculateScore() const = 0;
    virtual string getGenre() const = 0;
    int getDaysSinceRelease() const;
    static bool isLeapYear(int year);
    static int getDaysInMonth(int month, int year);
    virtual AnimationMovie* getAsAnimationMovie() { return nullptr; }
    virtual ActionMovie* getAsActionMovie() { return nullptr; }
    virtual SciFiMovie* getAsSciFiMovie() { return nullptr; }
};

#endif