#include <iostream>
using namespace std;

class tip
{
private:
    int num;
    int score;

public:
    tip(int n = 0, int s = 0) : num(n), score(s) {};
    void setout()
    {
        cout << num << "" << score << endl;
    }
    friend int max(tip a[], int size);
};
// 最大值函数
int max(tip a[], int size)
{
    tip maxtip(0, 0);
    for (int i = 0; i < size; i++)
    {
        if (maxtip.score < a[i].score)
        {
            maxtip.score = a[i].score;
            maxtip.num = a[i].num; // 更新最大值
        }
    }
    return maxtip.score;
}
int main()
{
    tip a[] = {tip(1, 56), tip(2, 37), tip(3, 92), tip(4, 87), tip(5, 72)};
    int highest = max(a, 5);
    cout << highest << endl;
    return 0;
}