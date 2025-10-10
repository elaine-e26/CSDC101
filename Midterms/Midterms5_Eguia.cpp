#include <iostream>
using namespace std;

int main(){
    int pascal1 = 100000, bar1 = 1, psi1 = 1;
    double pascal, bar, psi, pascal2 = 6894.76;
    char choice, choice2;
    
    cout<< "=== Pressure Unit Converter ==\n"
    << "1. Pascal to Bar \n"
    << "2. Pascal to PSI \n"
    << "3. Bar to Pascal \n"
    << "4. PSI to Pascal \n"
    << "5. Exit \n"
    << "Choose an option: " << choice;
    cin>> choice;
    
        switch(choice){
            case '1':
            cout<< "Enter value in Pascal: ";
            cin>> pascal;
            bar = pascal / pascal1;
            cout<< "Result: " << bar;
            break;
            case '2':
            cout<< "Enter value in Pascal: ";
            cin>> pascal;
            psi = pascal / pascal2;
            cout << "Result: " << psi;
            case '3':
            cout<< "Enter value in Bar: ";
            break;
            cin>> bar;
            pascal = bar * pascal1;
            cout<< "Result: " << pascal;
            break;
            case '4':
            cout<< "Enter value in PSI: ";
            cin>> psi;
            pascal = psi * pascal2;
            cout<< "Result: " << pascal;
            break;
            case '5':
            break;
            default:
            cout<< "Invalid choice!";
            break;
        }
    
return 0;
}
    
   
