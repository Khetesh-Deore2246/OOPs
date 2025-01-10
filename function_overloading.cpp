#include <iostream>
#include <string>
using namespace std;

class print
{
public:
    void show(int x)
    {
        cout << "Int :" << x << endl;
    }

    void show(char x)
    {
        cout << "Char :" << x << endl;
    }
};

int main()
{
    print s;
    s.show(4);
    s.show('K');
}