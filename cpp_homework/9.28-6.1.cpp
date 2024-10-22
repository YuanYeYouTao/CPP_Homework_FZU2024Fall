#include <iostream>
using namespace std;

class SalesManager {
private:
    static double discount;  // 折扣率
    static double sum;       // 总销售额
    static int n;            // 总销售数量

public:
    // 设置折扣率
    static void setDiscount(double d) {
        discount = d;
    }

    // 获取总销售额
    static double getSum() {
        return sum;
    }

    // 获取总销售数量
    static int getn() {
        return n;
    }

    // 计算平均销售额
    static double average() {
        return sum / n;
    }

    // 展示总销售额和平均销售额
    static void display() {
        cout << "Total Sales: " << sum << endl;
        cout << "Average Sales: " << average() << endl;
    }

    // 计算并更新总销售额和总销售数量
    void calculate(int num, int quantity, double price) {
        double endprice = price * (1 - discount);  // 应用折扣后的单价
        if (quantity >= 10) {  // 如果数量大于等于10，额外打98折
            endprice *= 0.98;
        }
        sum += endprice * quantity;  // 更新总销售额
        n += quantity;  // 更新总销售数量
    }
};

// 静态成员变量的初始化
double SalesManager::discount = 0;
double SalesManager::sum = 0;
int SalesManager::n = 0;

int main() {
    SalesManager em[3];  // 创建三个销售管理实例

    // 设置折扣率
    SalesManager::setDiscount(0.1);

    // 计算每笔销售
    em[0].calculate(101, 5, 25);
    em[1].calculate(102, 20, 22.5);
    em[2].calculate(103, 75, 20);

    // 显示总销售额和平均销售额
    SalesManager::display();
    
    return 0;
}