//concat = str1 + str2 (youi can add " " , for space between the strings

#include <iostream>
using namespace std;

int main (){

string firstname = "Li";
string secondname = "Syaoran";
string concat = firstname + " " + secondname;

cout<< concat << endl;

return 0;
}


//----------------------------------------------------------------//
//append, adding text to the string

#include <iostream>
using namespace std;

int main (){

string firstname = "Card";

cout<< "Before Append: " << firstname <<  endl;
firstname.append("captor Sakura");

cout<< "After Append: " << endl;
cout<< firstname << endl;


return 0;
}

//------------------------------------------------------------//
//length counting of the string, may use str.length() or str.size()

#include <iostream>
using namespace std;

int main (){

string firstname = "Card";

cout<< "The length of the string is: " << firstname.length() << endl;


return 0;
}

//------------------------------------------------------------//
//compare
#include <iostream>
using namespace std;

int main (){

string name = "Ahtisa Manalo";
string winner = "Mexico";

if(name == winner){
cout<< "Ahtisa Manalo, nanalo! ^o^" << endl;
}
else
cout<< "Ahtisa Manalo, natalo. :(" << endl;

return 0;
}
