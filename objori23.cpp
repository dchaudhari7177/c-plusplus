// Demonstration of ambuguity in inheritance

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 ::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class D
{
    int a;

public:
    void say()
    {
        cout << "Hello world my beautiful people" << endl;
    }
};

int main()
{
    // Ambuguity 1:-
    /*Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();*/
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}