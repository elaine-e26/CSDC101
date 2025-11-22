#include <iostream>
using namespace std;

void product ( int a, int b){
  cout << "The product of " << a << " and " << b << " is " << a*b << endl;
}
void sum ( int a, int b){
  cout << "The sum of " << a << " and " << b << " is " << a+b << endl;
}
void difference ( int a, int b){
  cout << "The difference of " << a << " and " << b << " is " << a-b << endl;
}
void quotient ( int a, int b){
  cout << "The quotient of " << a << " and " << b << " is " << a/b << endl;
}

int main() {
  int num1 = 10, num2 = 12;
  char choice = '/';
switch(choice){
  case('+'):
    sum(num1,num2);
    break;
  case('-'):
    difference(num1,num2);
    break;
  case('*'):
    product(num1,num2);
    break;
  case('/'):
    quotient(num1,num2);
    break;
  default:
    cout << "Error";
    break;
}
    return 0;
}
