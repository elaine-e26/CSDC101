#include <iostream>
using namespace std;

int main(){
  int balance = 1000, deposit, withdraw, newbalance;
  char choice;
  cout<< "=== ATM Menu ===\n"
  << "1. Check Balance \n"
  << "2. Deposit \n"
  << "3. Withdraw \n"
  << "4. Exit\n"
  << "Choose an option: ";
  cin>> choice;
  
  switch (choice){
      case '1':
      cout << "Your balance is: ₱" << balance;
      break;
      case '2':
      cout<< "Enter deposit amount: ";
      cin>> deposit;
      newbalance = balance + deposit;
      cout<< "New balance: ₱" << newbalance;
      break;
      case '3':
      cout<< "Enter withdrawal amount: ";
      cin>> withdraw;
        if (withdraw <= balance){
          newbalance = balance - withdraw;
         cout<< "New balance: ₱" << newbalance;
        } else{
          cout<< "Insufficient balance!";
        }
         break;
      case '4':
      cout<< "Thank you for using our ATM!";
      break;
      default:
      cout<<"Invalid choice!";
      break;
  }

    return 0;
}
