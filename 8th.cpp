#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter the value for a:";
cin>>age;
switch (age){
    case 18:
        cout<<"You are of age 18 Now";
        break;

    case 22:
        cout<<"You are of age 22 Now";
        break;
    
    case 3:
        cout<<"YOu are of age 2 Now";
        break;
    
    default:
        cout<<"please Enter The valid age";
        break;
}
return 0;
}