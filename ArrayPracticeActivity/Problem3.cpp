#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int last = arr[n - 1];          //to place the last element in 'last' variable
    for (int i = n - 1; i > 0; i--) //to move the elements to the right
        arr[i] = arr[i - 1];
    arr[0] = last;                  //to put the 'last' variable as the first index

    cout << "After rotation: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " "; //iteration to print elements after the movement
    cout << endl;

    return 0;
}
