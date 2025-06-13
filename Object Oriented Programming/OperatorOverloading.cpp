#include <iostream>
using namespace std;

class arrary {
private:
  int myArray[10];

public:
arrary() {
    for (int i = 0; i < 10; i++) {
      myArray[i] = i + 2;
    };
  };
// operator overloading script overloading
  int &operator[](int index){
    if(index >10) {
      cout << "Array index out of bound, exiting";
    }
    
    return myArray[index];
  };
};

int main() {
  arrary a;
  cout << a[2] << endl;
  cout << a[11] << endl;
  printf("Hello World"); 
  
};