// Multilevel Inheritance

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll number is: " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    If we are inheriting B from A and C from B: [ A--->B--->C ]
    1. A is the base class of B and B is the base class of C.
    2. ABC is called inheritance path.
    */
    result dipak;
    dipak.set_roll_number(77);
    dipak.set_marks(90, 80);
    dipak.display_result();

    return 0;
}