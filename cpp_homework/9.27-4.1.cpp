#include <iostream>

char sgn(double x)
{
    if (x >= 0)
        return ('+');
    else
        return ('-');
}

double abs(double x)
{
    if (x >= 0)
        return (x);
    else
        return (-x);
}

class CLinearEquation
{
private:
    double a, b;

public:
    CLinearEquation(double a1 = 1, double b1 = 0);
    void disp_Equation();
    void disp_Root();
};

CLinearEquation::CLinearEquation(double a1, double b1)
{
    a = a1;
    b = b1;
}

void CLinearEquation::disp_Equation()
{
    std::cout << "线性方程: " << a << "X" << sgn(b) << abs(b) << "=0" << std::endl;
}

void CLinearEquation::disp_Root()
{
    std::cout << "线性方程的根: Root=" << -b / a << std::endl;
}

int main()
{
    CLinearEquation e2, e3(3), e(-4, 5);
    e2.disp_Equation();
    e2.disp_Root();
}
