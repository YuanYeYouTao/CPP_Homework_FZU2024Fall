#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;

public:
    Person() {}
    Person(string name, int age, string gender, string address, string phoneNumber)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->phoneNumber = phoneNumber;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

class Teacher : virtual public Person
{
private:
    string title;

public:
    Teacher() {}
    Teacher(string name, int age, string gender, string address, string phoneNumber, string title) : Person(name, age, gender, address, phoneNumber)
    {
        this->title = title;
    }
    void setTitle(string title)
    {
        this->title = title;
    }
    void display() override
    {
        Person::display();
        cout << "Title: " << title << endl;
    }
};

class Cadre : Person
{
private:
    string post;

public:
    Cadre() {}
    Cadre(string name, int age, string gender, string address, string phoneNumber, string post) : Person(name, age, gender, address, phoneNumber)
    {
        this->post = post;
    }
    void setPost(string post)
    {
        this->post = post;
    }
    string getPost()
    {
        return post;
    }
};

class Teacher_Cadre : public Teacher, public Cadre
{
private:
    int wages;

public:
    Teacher_Cadre() {}
    Teacher_Cadre(string name, int age, string gender, string address, string phoneNumber, string title, string post, int wages) : Teacher(name, age, gender, address, phoneNumber, title), Cadre(name, age, gender, address, phoneNumber, post)
    {
        this->wages = wages; // 继承父类构造函数时，需要将wages作为参数传入
    }
    void setWages(int wages)
    {
        this->wages = wages;
    }
    void show()
    {
        Teacher::display();
        cout << "Post: " <<getPost()<< endl;
        cout << "Wages: " << wages << endl;
    }
};

int main()
{
    Teacher_Cadre tc("Tom", 30, "Male", "Beijing", "123456789", "Professor", "Director", 10000);
    tc.show();
    return 0;
}