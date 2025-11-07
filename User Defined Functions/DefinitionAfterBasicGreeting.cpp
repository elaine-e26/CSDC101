#include <iostream>
using namespace std;

void GoodMorning(); //declaration of functions
void GoodEvening();

int main(){

  GoodMorning(); 
  GoodEvening();
return 0;
}

void GoodMorning(){                   //definition of functions
  cout << "Hi! Good morning!" << endl;
}
void GoodEvening(){
  cout << "Hello! Good evening!" << endl;
}
