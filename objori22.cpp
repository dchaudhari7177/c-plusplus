/*
create 2 classes:-
    1.Simple Calculator --> Takes input of 2 numbers using a utility function and 
    perform +,-, *, / & displays the result using another function.
    2.Scientific Calculator--> Takes input of 2 numbers using a utility function and 
    perform any four scientific operation of your choice  & displays the result 
    using another function.

    create another class HybridCalculator and inherit it using these 2 classes:-
    Que1.what type of inheritance are you using?
    Que2.which mode of inheritance are you using?
*/
#include<iostream>
using namespace std;
class simple
{
    protected:
        int x1,y1;
    public:
        void process()
        {
            cout<<"The addition is "<<x1+y1<<endl;
            cout<<"The subtraction is "<<x1-y1<<endl;
            cout<<"The multiplication is "<<x1*y1<<endl;
            cout<<"The division is "<<x1/y1<<endl;
        }
        void set(int a,int b)
        {
            x1=a;
            y1=b;
        }
};

class scientific
{
    protected:
        int x2,y2;
    public:
        void process()
        {
            cout<<"The square root of x is "<<sqrt(x2)<<endl;
            cout<<"The square root of y is "<<sqrt(y2)<<endl;
            cout<<"The cube root of x is  "<<cbrt(x2)<<endl;
            cout<<"The cube root of y is "<<cbrt(y2)<<endl;
        }
        void set(int a,int b)
        {
            x2=a;
            y2=b;
        }
};

class hybrid: public simple,public scientific
{
    public:
        void masterset(int a,int b)
        {
            simple::set(a,b);
            scientific::set(a,b);
            simple::process();
            scientific::process();
        }
};

int main()
{
    int p,q;
    hybrid h;
    cout<<" Enter two values "<<endl;
    cin>>p>>q;

    h.masterset(p,q);
    return 0;
}