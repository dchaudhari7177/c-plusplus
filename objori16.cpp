// Demonstrarion of destructors:-

#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it returns any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is a time when constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside the main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this Block" << endl;
        cout << "Creating two more objects " << endl;
        num n2, n3;
        cout << "Exiting this Block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}