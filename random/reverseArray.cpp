#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int size){
    int last = size-1;
    for(int i = 0; i< (size/2);i++){
            swap(arr[i], arr[last]);
            last--;
    }
}
int main(){
    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}