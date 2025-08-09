#include <iostream>

using namespace std;

int main(){

    int len;
    cout << "Enter the number of elements in the array: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    cout << "Array before reversal: ";
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    int tempLen = len;
    int reversedArr[len];
    for(int i = 0; i<len; i++) {
        reversedArr[i] = arr[tempLen - 1];
        tempLen--;
        
    }

    cout << "\nArray after reversal: ";
    for(int i = 0; i < len; i++) {
        cout << reversedArr[i] << " ";
    }

    return 0;
}