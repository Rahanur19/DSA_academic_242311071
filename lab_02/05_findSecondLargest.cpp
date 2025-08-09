#include <iostream>

using namespace std;

int main() {
    int len, largest, secondLargest;
    cout << "Enter the number of elements in the array: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    largest = arr[0]>arr[1] ? arr[0] : arr[1];
    secondLargest = arr[0]<arr[1] ? arr[0] : arr[1];

    for (int i = 2; i < len; i++) {
        if (largest < arr[i]) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (len < 2) {
        cout << "Array must contain at least two elements." << endl;
    } else {
        cout << "The Second Largest element is: " << secondLargest << endl;
    }
    return 0;
}