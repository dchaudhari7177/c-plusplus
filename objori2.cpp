#include <iostream>
#include <string.h>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void one_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number"<<endl;
    cin >> s;
}

void binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binsry Number" << endl;
            exit(0);
        }
    }
}

void binary ::one_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
        cout << endl;
    
 }

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.one_compliment();
    b.display();

    return 0;
}