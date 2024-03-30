#include <iostream>
#include <ctime>  
#include <iomanip> 
#include <sstream> 
#include "Date.h"
#include "Timer.h"


int Date::getYear() const{
    return year;
}
int Date::getDay() const {
    return day;
}
int Date::getMonth() const{
    return month;
}
void Date::setDay(int d) {
    try {
        if (d >= 1 && d <= 31) {
            day = d;
        }
        else {
            throw std::out_of_range("Invalid Date");
        }
    }
    catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
        //out << e.what() << std::endl;
    }
}
void Date::setMonth(int m) {

    try {
        if (m >= 1 && m <= 12) {
            month = m;
        }
        else {
            throw std::out_of_range("Invalid Month");
        }
    }
    catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
        //out << e.what() << std::endl;
    }
}
void Date::setYear(int y) {
    year = y;
}
void Date::Display() {
    std::cout << "Day - " << day << " Month - " << month << " Year - " << year << std::endl;
    //out << "Day - " << day << " Month - " << month << " Year - " << year << std::endl;

}

Date Date::operator+(int days) const {

    Date currDate = Date{*this}; 

    int eachMonth[]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    currDate.day += days;
    while (currDate.day > eachMonth[currDate.month]) {
        currDate.day -= eachMonth[currDate.month];
        currDate.month++;
        if (currDate.month > 12) {
            currDate.month = 1;
            currDate.year++;
        }
    }

    return currDate;
}

std::string Date::toString() const {
    auto now = std::chrono::system_clock::now();
    auto now_time = std::chrono::system_clock::to_time_t(now);

    // Convert to a struct tm
    struct tm time_info;
    localtime_s(&time_info, &now_time);

    // Format the time as [YYYY-MM-DD HH:MM:SS]
    std::stringstream ss;
    ss << std::put_time(&time_info, "%Y-%m-%d %H:%M:%S");

    std::string formattedTime = ss.str();

    return formattedTime;
}
