#include<iostream>
using namespace std;

class employee
{
private:
    int a, b, c;
public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The value of a is"<<a<<endl;
        cout<<"The value of b is"<<b<<endl;
        cout<<"The value of c is"<<c<<endl;
        cout<<"The value of d is"<<d<<endl;
        cout<<"The value of e is"<<e<<endl;
    }
};

void employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee dipak;
    //dipak.a=133 --> This will show error is a is private
    dipak.d=77;
    dipak.e=17;
    dipak.setData(1,2,7);
    dipak.getData();

return 0;
}