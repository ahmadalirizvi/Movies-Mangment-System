#ifndef SYSTEM_H
#define SYSTEM_H

#include "movie.h"
#include "director.h"

class MovieManagementSystem {
private:
    Movie* movieList[50];
    Director* directorList[50];
    int movieCount;
    int directorCount;

public:
    MovieManagementSystem();
    ~MovieManagementSystem();
    void addMovie();
    void assignDirectorToMovie();
    void displayMenu();
    void searchMenu();
    void sortMoviesByYear();
};

#endif