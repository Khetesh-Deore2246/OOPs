#include <iostream>
#include <string>
using namespace std;
class Teacher
{ // properties/ Atributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // methods/member function
    void changedept(string newdept)
    {
        dept = newdept;
    }

    // setter
    void setsalary(double s)
    {
        salary = s;
    }

    // getter
    double display()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Deore sir";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.setsalary(200000);
    cout << t1.name << endl;
    cout << t1.display() << endl;
}