#include "date.h"
#include <iostream>
using namespace std;

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}
void Date::setDate(int d, int m, int y) { 
    day = d; month = m; year = y; 
}
void Date::displayDate() const {
    cout << day << "/" << month << "/" << year;
}
int Date::getDay() const {
    return day;
}
int Date::getMonth() const {
    return month;
}
int Date::getYear() const {
    return year;
}
Date::~Date() {}
