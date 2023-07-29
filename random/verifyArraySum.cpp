#include<iostream>
using namespace std;

bool verify(int arr[],int size, int inputSum){
    int sum = 0;
    if(size != 0){
        for(int i = 0; i<size;i++){
            sum+=arr[i]; 
        }
        if(sum == inputSum){
            return true;
        }
        else{
            return false;
        }
    }
    else{ // if size = 0, array empty
        if(inputSum==0){
            return true;
        }
        else {
           return false;
        }
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int inputSum = 15;
    int inputSum = 21;
    cout<<verify(arr, size, inputSum);
}