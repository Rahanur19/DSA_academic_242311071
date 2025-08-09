#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the number of elements in the array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter the elements of the array: ";

    for(int i=0;i<len;i++){
        cin>>arr[i];
    }

    cout<<"Initial array: ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nArray after removing duplicates: ";

    for(int i=0; i<len; i++){
        bool unique = true;
        for(int j=i+1;j<len;j++){
            if(arr[i] == arr[j]){
         unique = false;
         break;
        }
    }
        if(unique){
            cout<<arr[i] <<" ";
        }

    }
    cout<<endl;

}
