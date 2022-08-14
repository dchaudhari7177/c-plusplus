//Demonstration of single inheritance in public
#include <iostream>
using namespace std;

class Base
{
    int data1; // privatee by default and it is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Derived : public Base // class is being derived publically
{
    int data3;

public:
    void process();
    void diaplay();
};

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::diaplay()
{
    cout << "value of Data 1 is " << getData1() << endl;
    cout << "value of Data 2 is " << data2 << endl;
    cout << "value of Data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData();
    der.process();
    der.diaplay();

    return 0;
}