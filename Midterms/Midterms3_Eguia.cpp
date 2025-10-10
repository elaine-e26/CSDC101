#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum, difference, product, quotient;
    char choice;
    
    cout<< "---Simple Calculator---\n" <<
    "1. Addition \n" 
    << "2. Subtraction \n" 
    << "3. Multiplication \n" 
    << "4. Division \n"
    << "5. Exit \n" 
    << "Choose an Operation: " << endl;
    cin>> choice;
    
    switch (choice){
      case '1':
      cout << "Enter first number: ";
      cin>> num1;
      cout<< "Enter second number: ";
      cin>> num2;
      sum = num1 + num2;
      cout<< " Result: " << sum;
      break;
      case '2':
      cout << "Enter first number: ";
      cin>> num1;
      cout<< "Enter second number: ";
      cin>> num2;
      difference = num1 - num2;
      cout<< " Result: " << difference;
      break;
      case '3':
      cout << "Enter first number: ";
      cin>> num1;
      cout<< "Enter second number: ";
      cin>> num2;
      product = num1 * num2;
      cout<< " Result: " << product;
      break;
      case '4':
      cout << "Enter first number: ";
      cin>> num1;
      cout<< "Enter second number: ";
      cin>> num2;
      quotient = num1 / num2;
      cout<< " Result: " << quotient;
      break;
      case '5':
      cout<< "Thank you for using our calculator!";
      break;
      deault:
      cout<< "Invalid choice!";
      break;
    }
    return 0;
    }
