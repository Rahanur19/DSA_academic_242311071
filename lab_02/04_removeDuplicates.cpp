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

   
    cout << "Initial array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "\t";
    }

    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            if(arr[i] == arr[j]) {
                
                for(int k = j; k < len - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                len--;
                j--; 
            }
        }
    }


    cout<<"\nArray after removing duplicates: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "\t";
    }



    return 0;
}