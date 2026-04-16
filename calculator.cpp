/*
Write a program that makes a calculator:
Asks user to enter a choice from 	
Add
Subtract
Multiply
Divide
Takes 2 inputs and perform the necessary calculations
Display results

*/

//Exercise for input/output/if()
#include <iostream> 
using namespace std; 
int main(){

while (true)
{
cout<<"please enter 0 to leave,1 for add, 2 for substract, 3 for multiply, 4 for divide"<<endl;
int input;
cin>> input;
if (input==0){
     break;
}

int num1;
int num2;
if (input == 1){
    cout<<"please enter num1"<<endl;
    cin>>num1;
    cout<<"please enter num2"<<endl;
    cin>>num2;
    int sum = num1 + num2;
    cout<<"The sum of number :"<<sum<<endl;
}

else if(input==2){
    cout<<"please enter num1"<<endl;
    cin>>num1;
    cout<<"please enter num2"<<endl;
    cin>>num2;
    int Substract= num1 - num2; 
    cout<<"The substraction of number :"<<Substract<<endl;

}
else if(input==3){
    cout<<"please enter num1"<<endl;
    cin>>num1;
    cout<<"please enter num2"<<endl;
    cin>>num2;
    int multiply = num1*num2;
    cout<<"The multiplication of number :"<<multiply<<endl;
}
else if(input==4){
    cout<<"please enter num1"<<endl;
    cin>>num1;
    cout<<"please enter num2"<<endl;
    cin>>num2;
    int divide= num1/num2;
    cout<<"The division of number :" <<divide<<endl;
}
else{
 cout<<": )"<<endl;
 
}
    
}
 


}