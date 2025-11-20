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

    int min = arr[0]; //initializes value to each variable
    int max = arr[0];
    int sum = 0;
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) { //in each iteration, the following operations will be processed to get required outputs
        if (arr[i] < min) min = arr[i]; //determines the values of minimum and maximum from the set of elements
        if (arr[i] > max) max = arr[i];

        sum += arr[i]; //adds all elements

        if (arr[i] % 2 == 0) //condition to check the even and odd numbers from the set of elements
            even++;
        else
            odd++;
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}
