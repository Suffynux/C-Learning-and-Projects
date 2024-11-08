// We can create function outside the Main and we can call the function within the Main
// We are writing function for mutlipling the value with its exponentail power 

#include <iostream>

using namespace std;



// Creating a function for mutlipling by its power 
int powerFun ( int value , int power) {

    // creating a variable for the result
    int result = 1;
    int i = 1;
    for (i = 1; i <=power; i++){
        result = result * value;
        // 1*2 = 2;
        // 2+2= 4
        // 4+2= 8
    }
    return result;
}

int main() {
    int value;
    cout<< "Please enter the Number that you want to generate its power" << endl;
    cin >> value;

    int power;
    cout<< "Please enter the power number" << endl;
    cin >> power;

    cout <<" Here is your answer" << powerFun(value , power) << endl;
}