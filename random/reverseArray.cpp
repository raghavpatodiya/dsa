#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int size){
    int last = size-1;
    if(size%2==0){
        for(int i = 0; i< (size/2);){
            swap(arr[i], arr[last]);
            i++;
            last--;
        }
    }
}
int main(){
    int arr[]= {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}