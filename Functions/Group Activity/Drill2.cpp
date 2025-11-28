#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateRandomNumber(){
    srand(time(0));
    cout << "Random number: " << rand() % 100;
}

int main() {
    
  generateRandomNumber();
    
    return 0;
}
