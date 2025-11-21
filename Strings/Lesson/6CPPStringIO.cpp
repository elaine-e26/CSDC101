//input output
#include <iostream>
using namespace std;

int main (){

string superhero;

cout<< "Enter your Superhero: " << endl;
cin>> superhero; //will only print input without space, use getline function to print full name with spaces
cout<< "Your superhero is: " << superhero << endl; 

return 0;
}

//-----------------------------------------------------------//
//with getline function, to print full input with spaces

#include <iostream>
using namespace std;

int main (){

string superhero;

cout<< "Enter your Superhero: " << endl;
getline(cin, superhero);
cout<< "Your superhero is: " << superhero << endl;

return 0;
}

//-------------------------------------------------------------//

