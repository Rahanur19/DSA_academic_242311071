#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter the number of elements in the array: ";
    cin >> len;

    int arr[len];
    bool visited[len];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
        visited[i] = false;
    }
    cout << "Initial array: ";
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    cout << "Frequency of each element:\n";
    for(int i = 0; i < len; i++) {
        if(visited[i]) continue;

        int count = 1;
        for(int j = i + 1; j < len; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }
        visited[i] = true;
        cout << arr[i] << " : " << count << endl;
    }

    return 0;
}
