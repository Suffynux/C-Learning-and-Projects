// 
#include <iostream>
using namespace std;


int main () {
// Copying an Array
  // data should be 
//   Initializing an Array
  int age[] = {1 ,2 , 3 ,4 ,5, 6};
  int n[6];
  // using for loop for setting the age into second age
  for (int i= 0; i <6; i++){
    // cout<< age[i] << endl;
    
    n[i] = age[i];
    cout << n[i] ;
  };
}