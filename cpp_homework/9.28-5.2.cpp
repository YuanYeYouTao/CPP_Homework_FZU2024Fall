#include <iostream>
using namespace std;

class Date; // 前向声明

class Time
{
public:
    Time(int h, int m, int s); // 构造函数声明
    void display(Date &);      // 成员函数声明，展示时间和日期
private:
    int hour;   // 小时
    int minute; // 分钟
    int sec;    // 秒
};

class Date
{
public:
    Date(int m, int d, int y); // 构造函数声明
    friend class Time;         // 声明Time为友元类，可以访问Date的成员
private:
    int month; // 月份
    int day;   // 日期
    int year;  // 年份
};

// Time类构造函数定义
Time::Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    sec = s;
}

// 时间显示函数定义
void Time::display(Date &d)
{
    cout << d.month << "/" << d.day << "/" << d.year << endl; // 输出日期
    cout << hour << ":" << minute << ":" << sec << endl;      // 输出时间
}

// Date类构造函数定义
Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

int main()
{
    Time t1(14, 59, 59);  // 创建Time对象
    Date d1(9, 29, 2024); // 创建Date对象
    t1.display(d1);       // 调用Time的display函数展示时间和日期
    return 0;
}