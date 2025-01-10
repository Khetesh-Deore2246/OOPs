#include <iostream>
#include <string>
using namespace std;

class poly1
{
public:
    string name;

    // Default constructor
    poly1()
    {
        cout << "Non-parameterized constructor" << endl;
    }

    // Parameterized constructor
    poly1(string name)
    {
        this->name = name;
        cout << "Parameterized constructor" << endl;
    }
};

int main()
{
    // Non-parameterized constructor will be called
    poly1 p1;

    // Parameterized constructor will be called
    poly1 p2("Khetesh");

    return 0;
}
