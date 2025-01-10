#include <iostream>
#include <string>
using namespace std;
class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class student : public person // mode of inheritance
{                             // name ,age,rollno
public:
    int rollno;
    student(string name, int age, int rollno) : person(name, age)
    {
        this->rollno = rollno;
    }

    void getinfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Roll No." << rollno << endl;
    }
};

int main()
{
    student s1("Khetesh Deore", 19, 10);

    s1.getinfo();
    return 0;
}