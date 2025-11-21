//string length

#include <iostream>
#include <cstring> //make sure to put this to use string functions
using namespace std;

int main (){

char name[10] = "Blazer"; //array size is 10 but the string or characters length is 6
char uninitialized[10]; // can be used when there is still no input
char auto_size[] = "Mecha"; //will auto count the length of the characters declared whi is 5 characters

cout<< "The length of the string is: " << strlen(name) << endl;
cout<< "The length of the string is : " << strlen(auto_size) << endl;

return 0;
}

//-------------------------------------------------------------------//
//if else

#include <iostream>
#include <cstring> //make sure to put this to use string functions
using namespace std;

int main (){

char name[10];
char uninitialized[10]; // can be used when there is still no input

cout<< "Enter your name: " << endl;
cin.getline(name, 15);

if(strlen(name) < 10){ //condition limiting the size
cout<< "The name is VALID." << endl;
}
else
cout<< "The name is TOO LONG." << endl;
return 0;
}

//---------------------------------------------------------------//
//strcpy

#include <iostream>
#include <cstring> //make sure to put this to use string functions
using namespace std;

int main (){

char name[] = "Giannis Antetoukoumpo";
char nickname[10] = "Bucks";

cout<< "The owner of the nickname is: " << nickname << endl;

cout<< strcpy(nickname, name) << endl;

cout<< "After STRING COPY: " << nickname << endl;

return 0;
}

//------------------------------------------------------------//
//strcat = concatenation, combines declared string
#include <iostream>
#include <cstring> //make sure to put this to use string functions
using namespace std;

int main (){

char super[10] = "Spiderman";
char alter[10] = "PeterPark";

cout << "The name of the superhero before STRCAT is: " << super << endl;
strcat(super, alter);

cout<< "The name and real name of superhero after STRCAT is: " << super << endl;
return 0;
}

//----------------------------------------------------------------//
//strcmp = comparing strings, returns 0 if equal

#include <iostream>
#include <cstring> //make sure to put this to use string functions
using namespace std;

int main (){

char super[10] = "Spiderman";
char alter[10] = "PeterPark";

int result;
if(strcmp(super, alter) == 0){ //condition to check if strings compared are equal
cout << "The identity is revealed." << endl;
}
else
cout<< "Mismatch" << endl;


return 0;
}



