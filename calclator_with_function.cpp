#include <iostream>
using namespace std;
//passing value to funciton
void add(int a,int b){
    cout<<"addition is : "<<a+b<<endl;
}
void sub(int a,int b){
    cout<<"substract is : "<<a-b<<endl;
}
void multi(int a, int b){
    cout<<"mutliplicatoin is : "<<a*b<<endl;
}
void division(int a, int b){
    cout<<"division is : "<<a/b<<endl;
}
int main (){
    int num1;
    int num2;
    cout<<"please enter the first number"<<endl;
    cin>>num1;
     cout<<"please enter the second number"<<endl;
    cin>>num2;
    int choice;
    cout<<"please enter your choice\n";
    cout<<"1. adding\n";
    cout<<"2. substracting\n";
    cout<<"3. multiplication\n";
    cout<<"4. division\n";
     cin>>choice;
    switch(choice) {
        case 1:
        add(num1,num2);
        break;

        case 2:
        sub(num1,num2);
        break;

        case 3:
        multi(num1,num2);
        break;

        case 4:
        division(num1,num2);
        break;
    }
}