#include<iostream>
using namespace std;

// arrays

// int main(){
//     cout<<"Hi"<<endl;
    
//     int array[3]={1, 2, 3};
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<"the content of the array "<<i<<" is "<<array[i]<<endl;
//     }
//     return 0;
// }

// arrays and pointers

int main(){
    int array[4]={1, 2, 3, 4};
    int* p = array;
    cout<<"array[0]"<<" is "<<*p<<endl;
    cout<<"array[1]"<<" is "<<*(p+1)<<endl;
    cout<<"array[2]"<<" is "<<*(p+2)<<endl;
    cout<<"array[3]"<<" is "<<*(p+3)<<endl;
    return 0;
}