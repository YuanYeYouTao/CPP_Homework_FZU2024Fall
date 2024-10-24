#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string name;
    string number;
    struct mark
    {
        double Chinese;
        double Math;
        double English;
    } Mark;

public:
    void SetScore4()
    {
        cout << "Please enter the name and number" << endl;
        cin >> name >> number;
        cout << "Please enter the score" << endl;
        cin >> Mark.Chinese >> Mark.Math >> Mark.English;
    }
    void Disp4()
    {
        cout << "Name is " << name << endl;
        cout << "Number is " << number << endl;
        cout << "Score : " << endl;
        cout << "Chinese " << Mark.Chinese << endl;
        cout << "Math " << Mark.Math << endl;
        cout << "English " << Mark.English << endl;
    }
};
int main()
{
    student stu;
    stu.SetScore4();
    stu.Disp4();
}
