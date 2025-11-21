//if input has a space, the next characters after the space will ot be printed

#include <iostream>
using namespace std;

int main (){

char name[10] = "Blazer";
char uninitialized[10]; //can be used when there is still no input, since the declared size is 10, max of 10 characters will be printed from the input of the user
char auto_size[] = "Mecha";

cout<< "The first name is: " << name << endl;
cout<< "The auto sized character array is: " << auto_size << endl;

cout<< "-----------------------------------------" << endl;
cout<< "Enter a name: " << endl;
cin>> uninitialized;
cout<< "The name from the user is: " << uninitialized << endl;
return 0;
}


//-------------------------//

#include <iostream>
using namespace std;

int main (){

char name[10] = "Blazer";
char uninitialized[10]; //can be used when there is still no input
char auto_size[] = "Mecha";

cout<< "The first name is: " << name << endl;
cout<< "The auto sized character array is: " << auto_size << endl;

cout<< "-----------------------------------------" << endl;
cout<< "Enter a name: " << endl;
cin.getline(uninitialized,10); //prints the full name of the input even if it has a space but is limited to the array size
cout<< "The name from the user is: " << uninitialized << endl;
return 0;
}
