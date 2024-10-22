#include<iostream>
using namespace std;

class counter {
    unsigned int value;
public:
    counter() : value(0) {}
    void operator++();
    void operator--();
    int get() { return value; }
};

void counter::operator++() {
    if (value < 6) value++;
}

void counter::operator--() {
    if (value > 0) value--;
}

int main() {
    counter c1;
    for (int i = 0; i < 10; i++)
        ++c1;
    cout << c1.get() << "\n";

    --c1;
    --c1;
    cout << c1.get() << "\n";

    return 0;
}
