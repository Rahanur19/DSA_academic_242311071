#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter the number of elements in the array: ";
    cin >> len;
    int arr[len];
    int oddArr[len], evenArr[len];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
        oddArr[i] = arr[i];
        evenArr[i] = arr[i];
    }
    cout << "Initial array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    int oddLen = len, evenLen = len;
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            oddArr[i] = -1;
        } else {
            evenArr[i] = -1;
        }
    }

    for (int i = 0; i < oddLen; i++) {
        if (oddArr[i] == -1) {
            for (int j = i; j < oddLen - 1; j++) {
                oddArr[j] = oddArr[j + 1];
            }
            oddLen--;
            i--;
        }
    }

    for (int i = 0; i < evenLen; i++) {
        if (evenArr[i] == -1) {
            for (int j = i; j < evenLen - 1; j++) {
                evenArr[j] = evenArr[j + 1];
            }
            evenLen--;
            i--;
        }
    }

    cout << "\nOdd Array: ";
    for (int i = 0; i < oddLen; i++) {
        cout << oddArr[i] << " ";
    }
    cout << "\nEven Array: ";
    for (int i = 0; i < evenLen; i++) {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    return 0;
}
