#include <iostream>
using namespace std;

class Student
{
public:
    // 构造函数
    Student(int n, float s) : num(n), score(s) {}

    // 更新学生信息
    void change(int n, float s)
    {
        num = n;
        score = s;
    }

    // 显示学生信息
    void display()
    {
        cout << num << " " << score << endl;
    }

private:
    int num;     // 学生编号
    float score; // 学生成绩
};

int main()
{
    Student stud(101, 78.5);
    Student *p = &stud;

    p->display();
    p->change(101, 80.5);
    p->display();

    return 0;
}