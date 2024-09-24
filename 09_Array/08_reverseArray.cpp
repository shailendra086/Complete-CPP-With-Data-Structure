#include <iostream>
using namespace std;

void printArray(int arr[],  int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[8] = {2,4,5,6,7,1,9,11};
    int start = 0; 
    int end = 8 - 1; 
    while (start <= end){
        swap(arr[start], arr[end]);
        start++; 
        end--;
    } 

    printArray(arr,8);
    return 0;
}