// 
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <algorithm>

// int main () {
// // Copying an Array
//   // data should be 
// //   Initializing an Array, firt we give the datatype then name and then size of array
//   int age[] = {1 ,2 , 3 ,4 ,5, 6};
//   int n[6];
//   // using for loop for setting the age into second age
//   for (int i= 0; i <6; i++){
//     // cout<< age[i] << endl;
    
//     n[i] = age[i];
//     cout << n[i] ;
//   };
// }


// int main() {
//     srand(time(NULL)); // Seed the random number generator

//     int x = rand();
//     int randomNum = 1 + x % 6;
//     cout << randomNum << endl;
   
//     return 0;
// }

// finding the max value in the array 



// int main () {
//     int studentAges[] = { 1, 2, 3 ,43 ,54 , -23};
//     int size = 6;
//     int smallestAge = INT_MAX; //
//     int indexOfAge = -1;


//     for (int i = 0; i < size; i++ ){
//         if (studentAges[i] < smallestAge) {

//             smallestAge = studentAges[i];
//             indexOfAge = i;

//         }
//     }
//     cout <<"Smallest value is: " <<smallestAge << endl;
//     cout <<"Index of smallest  value is: " <<indexOfAge << endl;


// };


int main() { 
  // Comparing two arrays
  int equal = 1; // Assume arrays are equal initially
  int num1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int num2[100] = {1, 2, 3, 4, 5, 6, 7, 8};

  for (int i = 0; i < 10; i++) { // Compare all 10 elements
    if (num1[i] != num2[i]) {
      equal = 0; // Mark arrays as not equal
      break; // Stop checking further
    }
  }

  if (equal == 1) {
    cout << "The arrays are equal" << endl;
  } else {
    cout << "The arrays are not equal" << endl;
  }

  return 0;
}

// Program for Reverse a string using function in array


// function for reversing a string in array
void reverseName(string &name)
{  
  reverse(name.begin() ,name.end());
}


int main() { 
  string name;
  cout << "Enter your name: " << endl;
  cin  >> name;
  reverseName(name);
  cout << "Reverse Name is: " << name << endl;
  return 0;
}
