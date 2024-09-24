#include <iostream>
using namespace std;

void printArray(int arr[] , int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void inc (int arr[] , int n){
    arr[0] = arr[0] + 10;
    printArray(arr,2);
}


int main() {
    int arr[2]= {2 , 4};   
    
    inc(arr,2);
   printArray(arr,2);
   return 0;
}