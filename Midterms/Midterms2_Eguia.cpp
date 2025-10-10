#include <iostream>
using namespace std;

int main() {
    int number, product;
    char choice;
    
    cout<< "Enter a number: " << endl;
    cin>> number;
    
    for (int i = 1; i <= 10; i++ ){
        product = number * i;
        cout << " " << number << " * " << i << " = " << product << endl;
    }
    cout << "Do you want to try another number? Press 1 for yes, 0 for no"<< endl;
    cin>> choice;
     if (choice = 1){
         cout<< "Enter a number: " << endl;
        cin>> number;
    
    for (int i = 1; i <= 10; i++ ){
        product = number * i;
        cout << " " << number << " * " << i << " = " << product << endl;
        } 
    } else if (choice = 0);
        cout << "Goodbye";
    return 0;
}
