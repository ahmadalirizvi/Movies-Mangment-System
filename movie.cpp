#include "movie.h"
#include <iostream>

Movie::Movie(string t, int d, int m, int y, double r) : title(t), releaseDate(d, m, y), rating(r), director(nullptr) {}
void Movie::setTitle(string t) { 
    title = t; 
}
void Movie::setReleaseDate(int d, int m, int y) { 
    releaseDate.setDate(d, m, y); 
}
void Movie::setRating(double r) { 
    rating = r; 
}
void Movie::setDirector(Director* d) { 
    director = d; 
}
string Movie::getTitle() const { 
    return title; 
}
Date Movie::getReleaseDate() const { 
    return releaseDate; 
}
double Movie::getRating() const { 
    return rating; 
}
Director* Movie::getDirector() const { 
    return director; 
}
int Movie::getReleaseYear() const { 
    return releaseDate.getYear(); 
}
bool Movie::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int Movie::getDaysInMonth(int month, int year) {
    switch (month) {
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            return 30;
        case 2:  
            if (isLeapYear(year)) {
                return 29; 
            }
            else {
                return 28;
            }
        default: 
            return 31;
    }
}
int Movie::getDaysSinceRelease() const {
    int currentDay = 27;
    int currentMonth = 6;
    int currentYear = 2025;

    int releaseDay = releaseDate.getDay();
    int releaseMonth = releaseDate.getMonth();
    int releaseYear = releaseDate.getYear();

    if (releaseYear > currentYear || (releaseYear == currentYear && releaseMonth > currentMonth) ||
        (releaseYear == currentYear && releaseMonth == currentMonth && releaseDay > currentDay)) {
        return 0;
    }

    int days = 0;

    for (int year = releaseYear; year < currentYear; year++) {
        if (isLeapYear(year)) {
            days += 366;
        } else {
            days += 365;
        }
    }
    for (int month = 1; month < currentMonth; month++) {
        days += getDaysInMonth(month, currentYear);
    }
    days += currentDay;

    for (int month = releaseMonth; month <= 12; month++) {
        if (month > releaseMonth) {
            days -= getDaysInMonth(month, releaseYear);
        } else {
            days -= getDaysInMonth(month, releaseYear) - releaseDay;
        }
    }

    return days > 0 ? days : 0;
}
Movie::~Movie() {}