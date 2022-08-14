// Inheritance in c++:-

#include <iostream>
using namespace std;

// Base class:-
class Employee
{
public:
    float salary;
    int id;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax:
/*Class {{derived-class name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}

//Notes:-
1.default visibility mode is private
2.Private visibility mode:- Public members of the base class becomes
private members of the derived class.

3.Public visibility mode:- Public members of the base class becomes
public members of the derived class.
4.Private members are never inherited.
*/

// creating a programmer class derived from employee base class.
class Programmer :public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(10);
    cout << skillf.languageCode << endl;
    cout<<skillf.id<<endl;
    skillf.getData();

    return 0;
}