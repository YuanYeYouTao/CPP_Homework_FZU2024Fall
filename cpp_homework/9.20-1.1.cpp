#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int sec;

public:
    void set_time()
    {
        cin >> hour >> minute >> sec;
    }
    void show_time()
    {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};
int main()
{
    Time t;
    t.set_time();
    t.show_time();
}
