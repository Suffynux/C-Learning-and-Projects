#include <iostream>
#include <string>
using namespace std;


// In the below example we will learn about if statement in C++ code
int main() {

    // Initalize the variables
    int amirAge, sufiyanAge;
    amirAge = 0;
    sufiyanAge = 0;

    // Asking Sufiyan to write his age
    cout << "Please enter your age Sufiyan: ";
    cin >> sufiyanAge;

    // Asking Amir to write his age
    cout << "Amir please enter your age ";
    cin >> amirAge;


    if(amirAge > sufiyanAge) {
    cout << "Amir is older than Sufiyan";
    };
};