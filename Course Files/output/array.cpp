// 
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main () {
// Copying an Array
  // data should be 
//   Initializing an Array, firt we give the datatype then name and then size of array
  int age[] = {1 ,2 , 3 ,4 ,5, 6};
  int n[6];
  // using for loop for setting the age into second age
  for (int i= 0; i <6; i++){
    // cout<< age[i] << endl;
    
    n[i] = age[i];
    cout << n[i] ;
  };
}


int main() {
    srand(time(NULL)); // Seed the random number generator

    int x = rand();
    int randomNum = 1 + x % 6;
    cout << randomNum << endl;

    return 0;
}