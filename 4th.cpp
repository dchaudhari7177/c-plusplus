#include<iostream>
using namespace std;

int sum(int a,int b){
cout<<"using function with two argument"<<endl;
return a+b;
}

int sum(int a, int b, int c){
    cout<<"using function with two argument"<<endl;
    return a+b+c;
}

int main(){
    cout<<"the sum of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<"the sum of 3, 7 and 9 is"<<sum(3,7,9)<<endl;
    return 0;
}