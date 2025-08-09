#include <iostream>

using namespace std;
int main(){

    int len, searchElement;
    bool flag = false;
    cout << "Enter the number of elements in the array: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    cout << "Inital array: ";
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    
    cout << "\nEnter the element to search: ";
    cin >> searchElement;

    for(int i = 0; i < len; i++) {
        if(arr[i] == searchElement) {
            cout << "Element "<<arr[i]<<" found at index: " << i << endl;
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout << "Element not found in the array." << endl;
    }
    


    return 0;
}