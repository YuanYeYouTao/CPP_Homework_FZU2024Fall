#include <iostream>
using namespace std;

class person
{               // 定义基类
    char *name; // 姓名
    int age;    // 年龄
    char *add;  // 住址
public:
    person() // 构造函数
    {
        cout << "the constructor of class person!\n";
    }
    person(char *name, int age, char *add) // 带参数的构造函数
    {
        this->name = name;
        this->age = age;
        this->add = add;
        cout << "the constructor of class person!\n";
    }
    ~person() // 析构函数
    {
        cout << "the destructor of class person!\n";
    }
    void display() // 成员函数
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "add:" << add << endl;
    }
};

class student : public person
{                     // 定义派生类student
    char *department; // 所在系
    int level;        // 年级
public:
    student() // 构造函数
    {
        cout << "the constructor of class student!\n";
    }
    student(char *name, int age, char *add, char *department, int level) : person(name, age, add) // 带参数的构造函数
    {
        this->department = department;
        this->level = level;
        cout << "the constructor of class student!\n";
    }
    ~student() // 析构函数
    {
        cout << "the destructor of class student!\n";
    }
    void display() // 成员函数
    {
        person::display();
        cout << "department:" << department << endl;
        cout << "level:" << level << endl;
    }
};

class teacher : public person
{                 // 定义派生类teacher
    char *major;  // 专业
    float salary; // 工资
public:
    teacher() // 构造函数
    {
        cout << "the constructor of class teacher!\n";
    }
    teacher(char *name, int age, char *add, char *major, float salary) : person(name, age, add) // 带参数的构造函数
    {
        this->major = major;
        this->salary = salary;
        cout << "the constructor of class teacher!\n";
    }
    ~teacher() // 析构函数
    {
        cout << "the destructor of class teacher! \n";
    }
    void display() // 成员函数 
    {
        person::display();
        cout << "major:" << major << endl;
        cout << "salary:" << salary << endl;
    }
};

int main()
{
    
    student d1("zhangsan", 19, "fuzhoudaxuecheng", "tongji xi", 2024);
    teacher d2("lisi", 45, "fuzhoudaxuecheng", "tongji xi", 8158);
    d1.display();
    d2.display();

    return 0;
}