#ifndef DATE_H
#define DATE_H
class Date {
private:
    int day, month, year;
protected:
   
public:
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    Date(int d = 1, int m = 1, int y = 2000);
    void setDate(int d, int m, int y);
    virtual ~Date();
    void displayDate() const;
};
#endif