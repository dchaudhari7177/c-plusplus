// Protected access modifier in c++

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*For a proyected Number:
                       |   public derivation   |    private derivation   |   protected derivation
    1.private members  |    not Inherited      |    not Inherited        |  not Inherited
    2.protected members|    protected          |    private              |  protected
    3.public members   |    public             |    private              |  protected
*/

class Derived : protected Base
{
};
int main()
{
    Base b;
    Derived d;
    // cout<<"b.a"; //Will not work since a is protected in both base as well as derived class
    return 0;
}