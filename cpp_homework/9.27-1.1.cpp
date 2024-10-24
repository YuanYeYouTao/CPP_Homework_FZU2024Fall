#include <iostream>
using namespace std;

class simplecat
{
public:
    simplecat(int age = 2, int weight = 3); // 构造函数，对变量进行初始化
    ~simplecat();                           // 析构函数
    int GetAge();                           // 获取年龄
    int GetWeight();                        // 获取体重

private:
    int itsage, itsweight; // 定义两个变量
};

simplecat::simplecat(int age, int weight)
{
    cout << "调用构造函数 " << endl;
    itsage = age;
    itsweight = weight;
}

simplecat::~simplecat()
{
    static int i = 1;
    cout << "调用析构函数 " << ++i << endl;
}

int simplecat::GetAge()
{
    return itsage;
}

int simplecat::GetWeight()
{
    return itsweight;
}

int main()
{
    simplecat F(3, 5), G;
    cout << "G age is " << G.GetAge() << endl;
    cout << "G weight is " << G.GetWeight() << endl; // 报错
}
