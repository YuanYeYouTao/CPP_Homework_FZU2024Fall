#include<iostream>
#include<algorithm>
using namespace std;
struct student{
    char name[10];
    double chinese;
    double math;
} stu[6];
void func1();
void func2();
void func3();
bool compareChinese(struct student a , struct student b);
bool compareMath(struct student a , struct student b);

int main()
{
    int sel;
    do{
        cout<<"Choice\n\t 1.Enter the data; 2.Output the data; 3.sort; 4.Exit\n";
        cin>>sel;
        switch(sel)
        {
            case 1:
                func1();
                break;
            case 2:
                func2();
                break;
            case 3:
                func3();
                break;
            default:
                break;
        }
    }while(sel == 1 || sel == 2 || sel == 3);
}
void func1()
{
    for(int i = 0 ; i < 6 ; i++)
    {
        cin>>stu[i].name>>stu[i].chinese>>stu[i].math;
    }
}
void func2()
{
    for(int i = 0 ; i < 6 ; i++ )
    {
        cout<<stu[i].name<<" "<<stu[i].chinese<<" "<<stu[i].math<<endl;
    }
}
void func3()
{
    int p;
    cout<<"Sort by Chinese or Math:\n";
    cout<<"1.Chinese    2.Math";
    cin>>p;
    switch(p)
    {
        case 1:
        sort(stu,stu+6,compareChinese);
        break;
        case 2:
        sort(stu,stu+6,compareMath);
        default:
        break;
    }
    func2();
}
bool compareChinese(struct student a , struct student b)
{
    return a.chinese > b.chinese;
}
bool compareMath(struct student a , struct student b)
{
    return a.math > b.math;
}