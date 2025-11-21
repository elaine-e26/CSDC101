//declaration

#include <iostream>
using namespace std;

int main (){

char name[10] = "Blazer";
char uninitiialized[10]; // can be used when tehre is still no input
char auto_size[] = "Mecha";

cout<< "The first name is: " << name << endl;
cout<< "The auto sized character array is: " << auto_size << endl;

return 0;
}
