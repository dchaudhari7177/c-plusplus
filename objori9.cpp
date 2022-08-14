// Constructors
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Creating a Constructor
    // constructors is a special member functions with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked. Whenever an object is created

    complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // This is a default constructor as it takes no parameters.
{
    a = 0;
    b = 0;
}
int main()
{
    complex c;
    c.printNumber();

    return 0;
}

/*
Characteristics of Constructors:-

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and Do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/