#include<iostream>
using namespace std;

//about
//round wise
//take position and put the minimum value of the array in that place
void selectionSort(int arr[], int n) {
    for (int i =0; i<n-1; i++) {
        int minimum = i;
        for (int j =i+1; j<n; j++) {
            if (arr[j]<arr[minimum]) {
                minimum=j;
            }
        }
        swap(arr[i],arr[minimum]);
    }
}
int main(){
    int arr[] = {1, 4, 7, 8, 10, 3, 5, 99};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    //print
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}