#include <iostream> 
using namespace std;

int main(){
  int cars[5] = {1, 44, 4, 55, 16}; //declaration of 5 elements which is inside the box, if each value is declared it is being initialized
  
  cout<< "The first car is " << cars[0] << endl; //array always starts its count with 0
  cout<< "The second car is " << cars[1] << endl;
  cout<< "The third car is " << cars[2] << endl;
  cout<< "The fourth car is " << cars[3] << endl;
  cout<< "The fifth car is " << cars[4] << endl;
  
  return 0;
  }
