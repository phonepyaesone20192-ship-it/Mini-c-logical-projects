#include <iostream>
using namespace std;

int main() {
    char play;

    cout << "Do you want to play (y or n)? ";
    cin >> play;

    while (play == 'y') {
        int input;
        cout << "Please enter a number: ";
        cin >> input;

        int i = 0;
        bool found = false;

        while (i * i <= input) {
            if (i * i == input) {
                cout << "The square root is: " << i << endl;
                found = true;
                break;
            }
            i++;
        }

        if (!found) {
            cout << "There is no integer square root for: " << input << endl;
        }

        cout << "Play again (y or n)? ";
        cin >> play;
    }

    return 0;
}