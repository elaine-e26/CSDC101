#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

int main (){
  
  srand(time(0)); //random genrator in order generate multiple random numbers within the seed number
  cout << "The random number in the dice is with SRAND is" << rand() % 6 + 1 << endl;
  
return 0;
}
