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

    cout << "Array before reversal: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < len / 2; i++) {
        swap(arr[i], arr[len - 1 - i]);
    }

    cout << "\nArray after reversal: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
