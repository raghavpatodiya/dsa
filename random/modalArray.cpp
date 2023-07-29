#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]= {1, 2, 3, 4, 2, 3, 4, 1, 1, 1, 3, 2, 4};
    int N = sizeof(arr)/sizeof(arr[0]);
    int mode = arr[0];
    int count = 0;
    for(int i = 0; i<N; i++){
        int temp = 0;
        for(int j=0;j<N;j++){
            if(arr[i]==arr[j]){
                temp++;
            }
        }
        if(temp>count){
                count = temp;
                mode = arr[i];
            }
    }
    cout<<mode<<" : "<<count<<endl;
    return 0;
}