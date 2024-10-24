#include <iostream>
using namespace std;

class Date
{
public:
    Date(int month = 1, int day = 1, int year = 2005);
    // Date(int month, int day);
    // Date(int month);
    // Date();

    friend void displayDate(const Date &date);

private:
    int month;
    int day;
    int year;
};

Date::Date(int month, int day, int year) : month(month), day(day), year(year) {}

// Date::Date(int month, int day) : month(month), day(day), year(2005) {}

// Date::Date(int month) : month(month), day(1), year(2005) {}

// Date::Date() : month(1), day(1), year(2005) {}

void displayDate(const Date &date)
{
    cout << date.month << "/" << date.day << "/" << date.year << endl;
}

int main()
{
    Date d1(10, 13, 2005);
    Date d2(12, 30);
    Date d3(10);
    Date d4;

    displayDate(d1);
    displayDate(d2);
    displayDate(d3);
    displayDate(d4);

    return 0;
}
