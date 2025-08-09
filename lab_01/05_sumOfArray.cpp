#include <iostream>

using namespace std;

int main(){

    int len, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    for(int i = 0; i < len; i++) {
        sum += arr[i];
    }

    cout << "\nThe sum of the array elements is: " << sum << endl;


    return 0;
}