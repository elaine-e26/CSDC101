#include <iostream>
using namespace std;

float cToFahrenheit(float celsius){ //celsius is the variable name of the temperature value input within this function
    return (celsius * 9.0 / 5.0) + 32.0;
}

float fToCelsius(float fahrenheit){ //fahrenheit is the variable name of the temperature value input within this function
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
  int choice;
  float temperature, result;
  
    cout<< "Choose a conversion type: " << endl;
    cout<< "1. Celsius -> Fahrenheit" << endl;
    cout<< "2. Fahrenheit -> Celsius" << endl;
    cout<< "Enter choice: ";
    cin>> choice;
    cout << "\nEnter temperature value: " << endl;
    cin>> temperature;
    
    if(choice == 1){
        result = cToFahrenheit(temperature); //called function to perform
        cout<< "Celsius -> Fahrenheit" << endl;
        cout<< "Result: " << temperature << "°C -> " << result << "°F" << endl;
    }
    else if(choice == 2){
        result = fToCelsius(temperature);
        cout<< "Fahrenheit -> Celsius" << endl;
        cout<< "Result: " << temperature << "°F -> " << result << "°C" << endl;
    }
    else
        cout<< "Invalid choice. Please choose between 1 or 2 only.";
        
        
    return 0;
}
