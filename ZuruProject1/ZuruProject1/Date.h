#pragma once
#include<fstream>
extern std::ofstream out;
class Date {
private:
    int day, month, year;
public:

    int getYear() const;
    int getDay() const;
    int getMonth() const;
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    void Display();
    Date operator+(int days) const;

    std::string toString() const;
    
};
