#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter the value for a:";
cin>>age;

if(age<18){
    cout<<"You are chindren";
}

else if(age==18){
    cout<<"You will be able to get driving licence now";
}

else{
    cout<<"You are an adult";
}
return 0;
}