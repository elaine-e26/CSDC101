#include <iostream>
using namespace std;

int main() {
    int numbers[10];   //multiple inputs
    int odd = 0, even = 0;

    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++) {   //condition to make sure inputs are limited to what is asked
        cin >> numbers[i];
        if (numbers[i] % 2 == 0)   //condition to chec if each input is odd or even
            ++even;
        else
            ++odd;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}
