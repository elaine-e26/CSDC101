#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//drill 1
void printWelcome(){  			
    cout << "\nWelcome to C++ Functions!";
}

//drill 2
int generateRandomNumber(){ 	
    srand(time(0));
   return rand() % 100;
}

//drill 3
void printSquare(int n){
    for (int row = 1; row <= n; row++){          
        for (int column = 1; column <= n; column++){      
            cout << "* ";         
        }
        cout << endl; 
    }
}

//drill 4
int calculateSum(int a, int b){ 	
    return  a + b;	
}

//drill 5
double getPi(){
    return 3.14159;
}

//drill 6
void printRectangle(int length, int width) {
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

//drill 7
int calculatePower(int a, int b){
   return pow(a, b);
}

//drill 8
void printGreeting() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name;
}

//drill 9
int calculateAverage(float a, float b, float c){
    return (a + b + c)/3;
}

//drill 10
bool getRandomBoolean(){
    srand(time(0));
    return rand() % 2;
}

int main(){
    int choice;
    
 
    cout << "Choose a Program Drill (1-10): " << endl;
    cout << " 1 - C++ Greetings" << endl;
    cout << " 2 - Random Number Generator" << endl;
    cout << " 3 - Square Printer" << endl;
    cout << " 4 - Sum Calculator" << endl;
    cout << " 5 - Pi Value" << endl;
    cout << " 6 - Rectangle Printer" << endl;
    cout << " 7 - Power Calculator" << endl;
    cout << " 8 - Special Greetings" << endl;
    cout << " 9 - Average Calculator" << endl;
    cout << " 10 - Random Boole Generator" << endl;
    cout << "Your choice: ";
    cin >> choice;
    
    switch (choice){
        case 1:
        printWelcome();
        break;
        
        case 2:
        cout << "\nGenerated Random Number: " << generateRandomNumber() << endl;
        break;
        
        case 3:
        int n;
        cout << "\nEnter size: ";
        cin >> n;
        printSquare(n);
        break;
        
        case 4:
        cout << "\nSum: " << calculateSum(5, 5) << endl;
        break;
        
        case 5:
        cout << "\nPi: " << getPi();
        break;
        
        case 6:
        cout << "\nRectangle 1 (3 x 5):" << endl;
        printRectangle(3, 5);
        break;
        
        case 7:
        int base, exponent;
        cout<< "\nEnter the base: ";
        cin >> base;
        cout<< "Enter the exponent: ";
        cin>> exponent;
        cout << base << "^" << exponent << "=" << calculatePower(base, exponent) <<endl;
        break;
        
        case 8:
        printGreeting();
        break;
        
        case 9:
        cout << "\nThe average of the three numbers is: " << calculateAverage(1, 2, 3);
        break;
        
        case 10:
        bool result; 
        result = getRandomBoolean();
        cout << "True or False: "; 
            if (result == 1){
            cout << "True";
            } else{
            cout << "False";
            }
        break;
        
        default:
        cout << "Invalid choice. Please pick from 1-10 only." << endl;
        break;
    }
  

    return 0;
}

