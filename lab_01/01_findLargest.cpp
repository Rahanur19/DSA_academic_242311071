#include <iostream>

using namespace std;

int main(){

    int len;
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

    
    int largest = arr[0];
    for(int i = 1; i < len; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
    }

    cout << "The largest element is: " << largest << endl;


    return 0;
}