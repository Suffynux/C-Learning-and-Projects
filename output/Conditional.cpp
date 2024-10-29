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



// While Loop 
// Write a While loop for printing the first 100 Number

int main () {
    // int sum = 0;
    // We start the number 1 
    int num = 1;
    
    while (num <= 100) {
        num++;
        cout << num << "\n";
    }
}


// 

int main () {
    // int sum = 0;
    // We start the number 1 
    int num = 1;
    int numberLimt = 0;
    cout << "Please enter a number: ";
    cin >> numberLimt ;
  
    while (num <= numberLimt) {
        num++;
        cout << num << "\n";
    }
}


