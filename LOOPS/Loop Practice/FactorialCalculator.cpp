#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { 
        factorial *= i; //factorial * i = i, increment every iteration
    }
    cout << "Factorial = " << factorial << endl;

    return 0;
}
