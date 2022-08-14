// Parameterized and Default constructors:-

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) //--> This is a Parameterized constructor, as it accepts two parameter.
{
    a = x;
    b = y;
}
int main()
{
    // implicit call
    complex a(4, 6);
    a.printNumber();

    // Explicit call
    complex b = complex(5, 7);
    b.printNumber();

    return 0;
}