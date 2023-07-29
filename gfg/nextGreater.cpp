#include<bits/stdc++.h>
using namespace std;

void nextGreater(int arr[], int n){
    int next, i, j;
    for(i=0; i<n; i++){
        next = -1;
        for(j=i+1; j<n; j++){
            if (arr[j]>arr[i]){
                next = arr[j];
                break;
                }
        }
        cout<<arr[i]<<"-->"<<next<<endl;
    }
}
int main(){
    int arr[] = {1, 4, 7, 8, 10, 3, 5, 99};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextGreater(arr, n);
    return 0;

}
// next greater means, when you go through the stack an element can be grater than other only if its after the previous element 