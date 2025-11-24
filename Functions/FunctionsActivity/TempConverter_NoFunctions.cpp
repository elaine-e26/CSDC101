#include <iostream>
using namespace std;


int main() {
    int choice;
    double n, result; //using double since temperature conversions have decimal values
    
    cout<< "Choose a conversion type: " << endl;
    cout<< "1. Celsius -> Fahrenheit" << endl;
    cout<< "2. Fahrenheit -> Celsius" << endl;
    cout<< "Enter choice: ";
    cin>> choice;
    cout << "\nEnter temperature value: " << endl;
    cin>> n;
    
    if(choice == 1){
        result = (n * 9.0 / 5.0) + 32.0;
        cout<< "Celsius -> Fahrenheit" << endl;
        cout<< "Result: " << n << "°C -> " << result << "°F" << endl;
    }
    else if(choice == 2){
        result = (n - 32.0) * 5.0 / 9.0;
        cout<< "Fahrenheit -> Celsius" << endl;
        cout<< "Result: " << n << "°F -> " << result << "°C" << endl;
    }
    else
        cout<< "Invalid choice. Please choose between 1 or 2 only.";
    
    return 0;
}
