#include <iostream>
using namespace std;
/*Using a for loop, write a program that asks the user to enter two integers, 
then calculates and displays their greatest common divisor (GCD). (H)
 	Enter two integers: 12 28
GCD
*/

int main (){
    int one;
    int two;
    cout<<"pleae enter first integer"<<endl;
    cin>>one;
    cout<<"pleae enter second integer"<<endl;
    cin>>two;
    int bigger;
    int smaller;
    if (one<two){
        bigger = two;
        smaller = one;
    }
    else {
        bigger = one;
        smaller =two;
    }
    for (int i = smaller; i >=1 ; i--){
        if (bigger%i==0 && smaller%i==0){
                cout<<"GCD is "<<i<<endl;
                break;
            }
    }
        
}

