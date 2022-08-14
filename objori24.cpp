// Demonstration of virtual Base class:-

#include <iostream>
using namespace std;
/*
Inheritance:-
student --> Test
student --> sports
test --> result
sports --> result
*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your Result is Here:"<<endl
             << "Maths: " << maths << endl
             << "Physics:" << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is:" << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your Total Score is: " << total << endl;
    }
};

int main()
{
    Result Dipak;
    Dipak.set_number(4200);
    Dipak.set_marks(77.7, 90.7);
    Dipak.set_score(9);
    Dipak.display();
    return 0;
}