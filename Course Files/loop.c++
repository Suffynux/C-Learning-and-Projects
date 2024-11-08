// Do while loop 

/*
do{

    condition

} while {

    condition

}
*/

#include <iostream>
using namespace std;

int main() {

    // making variables for characters and the making a variable for tries
    char c;
    int tryNum = 1;
    do {
        cout << "Please enter guessing character by entering any alphabet";
        cin >> c;
        if (c== 'z') {
            cout << "You guessed the Correct character";
        } else 
        tryNum++;
        } while (tryNum <= 5);
    }




