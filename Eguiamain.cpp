#include <iostream>// input and output library
using namespace std;// standard namespace for cin and cout

int main (){
    
    int num1,num2,product;//integer variable number
    
    cout<<"Enter a number: ";//output for end user showing instruction in the screen
    cin>>num1; //input that has to be put by the user
    cout<< "Enter another number: "; //another instruction for user
    cin>>num2; //input for the 2nd instruction
    product = num1 * num2; //action done by the system when input are set
    cout<< "The product of the two numbers is: "<<product;//output of the action that will show on the screen for user

    return 0;
}
