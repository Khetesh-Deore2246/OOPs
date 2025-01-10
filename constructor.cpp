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
    // non -parametrised constructor
    Teacher()
    {
        dept = " Computer Science"; // set Dept
    }
    // parametrised constructor
    Teacher(string name, string d, string sub, double sal)
    {
        this->name = name; // here this-> pointer shows  that we are using property of object of left
        dept = d;
        subject = sub;
        salary = sal;
    }
    // copy constructor  custom copy
    Teacher(Teacher &orgob)
    {
        cout << "I am in the Custom copy constructor" << endl;
        this->name = orgob.name;
        this->dept = orgob.dept;
        this->subject = orgob.subject;
        this->salary = orgob.salary;
    }

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

    void display_con()
    {
        cout << "name:" << name << endl;
        cout << "subject:" << subject << endl;
    }
};

int main()
{
    Teacher t1("Deore sir", "Computer Science", "C++", 20000 /*this is for parameterised*/); // Call the constructor

    Teacher t2(t1); /// defult copy constructor invoked

    // t1.name = "Deore sir";
    // t1.dept = "Computer Science";
    // t1.subject = "C++";
    // t1.setsalary(200000);
    // cout << t1.dept << endl;
    // cout << t1.display() << endl;

    // t1.display_con();

    t2.display_con();
}