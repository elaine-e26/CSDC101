#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) { //iteration of all elements 
        sum += arr[i];
    }

    int mean = sum / n; //operation to get the mean of all elements
    cout << "Mean = " << mean << endl;

    return 0;
}
