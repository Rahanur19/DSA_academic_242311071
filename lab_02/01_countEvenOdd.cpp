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

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    cout << "\nEven Count : " << evenCount;
    cout << "\nOdd Count: " << oddCount << endl;

    return 0;
}