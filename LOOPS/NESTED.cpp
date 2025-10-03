#include <iostream>
using namespace std;

int main()
{
    
    for (int row = 1; row <= 10; row++) {          // outer loop (rows)
        for (int column = 1; column <= 10; column++) {      // inner loop (columns)
            cout << "*";         // print product
        }
        cout << endl;  // new line after each row
    }
    
    return 0;
}

results to 10 asterisks per column and row


------
    another sample:
#include <iostream>
using namespace std;

int main()
{
    
    for (int row = 1; row <= 10; row++) {  
    
        cout<<"Row number:" << row <<" ";
        
        for (int column = 1; column <= 10; column++) {     
            cout<<column<< " ";        
        }
        cout<< endl; 
    }
    
    return 0;
}
