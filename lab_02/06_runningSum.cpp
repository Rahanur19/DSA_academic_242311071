#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter the number of elements in the array: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << "Initial array : ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
        cout << "\nSum of running elements at the undex of "<<i<< ": " << sum;
    }

    return 0;
}