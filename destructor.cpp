#include <iostream>
#include <string>
using namespace std;
class student
{
public:
  string name;
  double *cgpaPtr;

  student(string name, double cgpa)
  {
    // this->name=name;
    // cgpaPtr =new double;   shallow copy
    // *cgpaPtr =cgpa;

    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }
  student(student &obj)
  {
    // this->name=name;
    //    shallow copy
    // *cgpaPtr =cgpa;

    this->name = obj.name;
    cgpaPtr = new double; // deep copy
    *cgpaPtr = *obj.cgpaPtr;
  }

  void getinfo()
  {
    cout << "Name:" << name << endl;
    cout << "CGPA:" << *cgpaPtr << endl;
  }
  // detructor
  ~student()
  {
    cout << "Hi I delete everythoing\n";
    delete cgpaPtr; // memory leak
  }
};

int main()
{
  student s1("Khetesh Deore", 9);
  s1.getinfo();
}