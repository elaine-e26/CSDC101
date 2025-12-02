#include <iostream>
using namespace std;

int main(){
    
    int numbers[5] = {5, 1, 4, 2, 3};
    cout << "Before _______: ";
    
    for (int i = 0; i < 5; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    cout << "After _______: ";
    for (int i = 0; i < 5; i++){
        cout << numbers[i] << " ";
    }
    return 0;
}
