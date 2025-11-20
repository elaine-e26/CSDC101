#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) { //in each iteration, if the first element is greater than the next element then it is not considered ascending
            cout << "The array is NOT in ascending order" << endl;
            return 0;
        }
    }

    cout << "The array is in ascending order" << endl;
    return 0;
}
