#include <iostream>
#include <vector>
using namespace std;

// Sorting cards in hand - taking one by one
// Assume the first index is sorted
void insertionSort(vector<int> &arr) {
    int n = arr.size();
    int i = 1;
    while (i < n) {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}

int main() {
    vector<int> arr = {1, 4, 7, 8, 10, 3, 5, 99};
    insertionSort(arr);
    
    // Print the sorted array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}