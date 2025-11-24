#include <iostream>
using namespace std;

void passByValue(int x) {  //void function using PassbyValue, no return value, a copy of the original value
    x = x + 5;  // changes only the initial copy inside the void, the x will be original x plus 5
    cout << "Inside passByValue(): a = " << x << endl;
}

void passByReference(int &y) {  //void function using PassbyReference, no return value, a reference of the original value
    y = y + 5;  // changes the original variable by using &, inisde the void y will be original y plus 5
    cout << "Inside passByReference(): b = " << y << endl;
}

int main() {
    int a = 3;
    int b = 3;

    cout << "Before calling passByValue(): a = " << a << endl;
    passByValue(a); //calls the function inside the void, which then performs the function inside it
    cout << "After calling passByValue(): a = " << a << endl;  //remains the same as it is only a copy of the original value defined
 
    cout << "\nBefore calling passByReference(): b = " << b << endl;
    passByReference(b); //calls the function inside the void, 
    cout << "After calling passByReference(): b = " << b << endl;  //it changed since it was referenced in the function which allows it modify the value

    return 0;
}
