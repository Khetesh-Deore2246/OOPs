#include <iostream>
#include <string>
using namespace std;

class shape
{                            // abstract class
    virtual void draw() = 0; // pure virtual function
};
class circle : public shape
{
public:
    void draw()
    {
        cout << "Drawing the circle \n";
    }
};

int main()
{
    circle c1;
    c1.draw();
}