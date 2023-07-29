#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

void slidingWindowMaximum(int arr[], int N, int K){ //N is size of arr, K is sliding window
    // numeber of window slides is N-K+1
    int max;
    for(int i=0; i<=N-K;i++){ // N-K cause array starts from 0 index
        max = arr[i];
        for(int j=1;j<K;j++){
            max = std::max(arr[i], arr[i+j]);
        }
        std::cout<<max<<" ";
    }
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 3;

    slidingWindowMaximum(arr, N, K);
    return 0;
}