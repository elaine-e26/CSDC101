//character array, number of characters declared as array size
//tip: make sure to put an allowance to your array size

#include <iostream>
using namespace std;

int main (){

char name[10] = "Blazer"; //the number inside box is the array size of each character inside the apostrophe

cout<< "The name of the number one superhero is: " << name << endl;
cout<<  "The 6th character in the name of the superhero is: " << name[5] << endl; //array index of the 6th character
  
return 0;
}
