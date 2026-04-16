#include <iostream>
using namespace std; 


int main(){

    /*
    Write a program that takes the age of the user to decide if they are eligible for a driving job.
     If they are older than 18, check if they have a driving licence. 
     If yes, then display message to them: “You are eligible to apply for a driving job”. 
     Otherwise display message: “You are Not eligible to apply for a driving job ”.
*/
 
    int age ;
    cout<<"please enter your age"<<endl;
    cin>>age;
    
    if (age>18){
         while (true){
            cout<< "do you have a licence. 1 as a YES and 0 as a NO"<<endl;
            int input;
            cin>>input;
            if (input==1){
            cout<<"You are eligible to apply for a driving job"<<endl;
            break;
            }
            else if (input == 0){
            cout<<"you are not eligible to apply this job"<<endl;
            break;
            }
            else{
            cout<<"please put 1 0r 2 only"<<endl;
            }
        
    }
    }
    else{
        cout<<"You are Not eligible to apply for a driving job"<<endl;
    }

}