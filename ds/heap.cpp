// // a complete binary tree
// // max heap - children always smaller
// // min heap - children always bigger
// // height is log(n)

// // if parent i 
// // left child = 2i
// // right child = 2i + 1

// // heap using an array starts from 1 index

// // after insertion and deletion, remains complete binary tree
// #include<iostream>
// using namespace std;    

// class heap{
//     public:
//     int arr[100];
//     int size;
//     // constructor for initialization
//     heap(){
//         arr[0] = -1;
//         size = 0;
//     }
//     void insert(int val){
//         size=size+1;
//         int index = size;
//         arr[index]=val;
//         while(index>1){
//             int parent = index/2;
//             if(arr[parent]<arr[index]){
//                 swap(arr[parent], arr[index]);
//                 index= parent;
//             }else{
//                 return ;
//             }
//         }
//     }

//     void deleteFromHeap(){
//         if(size == 0){
//             cout<<"Already Empty"<<endl;
//             return ;
//         }
//         arr[1]= arr[size];
//         size--;
        
//         int index = 1;
//         while(index < size){
//             int leftIndex = 2 * index;
//             int rightIndex = 2 * index + 1;

//             int swapIndex = index;

//             if(leftIndex <= size && arr[swapIndex] < arr[leftIndex]){
//                 swapIndex = leftIndex;
//             }
//             if(rightIndex <= size && arr[swapIndex] < arr[rightIndex]){
//                 swapIndex = rightIndex;
//             }

//             if(index != swapIndex){
//                 swap(arr[index], arr[swapIndex]);
//                 index = swapIndex;
//             }
//             else{
//                 return ;
//             }
//         }

//     }
//     void print(){
//         for(int i = 1; i<=size; i++){
//             cout<<arr[i]<<" ";
//         }cout<<endl;
//     }
// };

// int main(){
//     heap h;
//     h.insert(50);
//     h.insert(55);
//     h.insert(53);
//     h.insert(52);
//     h.insert(54);
//     h.print();
//     h.deleteFromHeap();
//     h.print();
// }


#include<iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;
    
    // Constructor for initialization
    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }
    }

    void deleteFromHeap() {
        if (size == 0) {
            cout << "Heap is already empty." << endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int index = 1;
        while (index < size) {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;

            int swapIndex = index;

            if (leftIndex <= size && arr[swapIndex] < arr[leftIndex]) {
                swapIndex = leftIndex;
            }
            if (rightIndex <= size && arr[swapIndex] < arr[rightIndex]) {
                swapIndex = rightIndex;
            }

            if (index != swapIndex) {
                swap(arr[index], arr[swapIndex]);
                index = swapIndex;
            }
            else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void buildHeap(int inputArr[], int n) {
        size = n;
        for (int i = 0; i < n; i++) {
            arr[i + 1] = inputArr[i];
        }
        for (int i = size / 2; i >= 1; i--) {
            int index = i;
            while (index <= size) {
                int leftIndex = 2 * index;
                int rightIndex = 2 * index + 1;
                int swapIndex = index;
                if (leftIndex <= size && arr[swapIndex] < arr[leftIndex]) {
                    swapIndex = leftIndex;
                }
                if (rightIndex <= size && arr[swapIndex] < arr[rightIndex]) {
                    swapIndex = rightIndex;
                }
                if (index != swapIndex) {
                    swap(arr[index], arr[swapIndex]);
                    index = swapIndex;
                }
                else {
                    break;
                }
            }
        }
    }
};
int main() {
    heap h;
    int inputArr[] = { 50, 55, 53, 52, 54 };
    // calculating size of input array
    int n = sizeof(inputArr) / sizeof(inputArr[0]);
    
    h.buildHeap(inputArr,n);//calling build heap 
    h.print();

    h.deleteFromHeap();
    h.print();

    return 0;
}
