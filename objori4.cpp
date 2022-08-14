//implementation of static member variables & functions
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id:";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of employee is " << id<<" and this is employee number "<<count<<endl;
    }

    static void getCount(void){
        // cout<<id; //Throws an error
        cout<<"The value of count is: "<<count<<endl;
    }
};

//Count is the static data member of class Employee
int Employee ::count; //Default value 0
int main()
{
    Employee Dipak, Tejaswini, Kshitij;
    //Dipak.id = 1;
    //Dipak.count = 1; //cannot do this as Id and count are private

    Dipak.setData();
    Dipak.getData();
    Employee :: getCount();

    Tejaswini.setData();
    Tejaswini.getData();
    Employee :: getCount();

    Kshitij.setData();
    Kshitij.getData();
    Employee :: getCount();

    return 0;
}