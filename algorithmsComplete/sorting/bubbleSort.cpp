#include<iostream>
using namespace std;

//about 
// round 1 - compare with neighbor
// round 2 - swap and put bigger one ahead
// round 3 - do this for all elements
// in first iteration, the biggest element will be put in place
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {1, 4, 7, 8, 10, 3, 5, 99};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    //print
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}