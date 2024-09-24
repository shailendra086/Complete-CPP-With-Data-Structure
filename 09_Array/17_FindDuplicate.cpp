#include <iostream>
using namespace std;

int FindDuplicate(int arr[],int n){
      // negative method  
    // int i = 0;
    // int ans = -1;
    // for  (int i = 0; i<n; i++){
    //     // it store the index 
    //     int index = abs(arr[i]);
    //     // it check the value is negative or not
    //     if ( arr[index] < 0){
    //         return index;
    //     }
    //    arr[index] *= -1;
    // }
    // return ans;


    //Positioning method
    int i = 0;

    while (arr[0] !=arr[arr[i]]){
        swap(arr[0], arr[arr[i]]);
    }
    return arr[0];

}


void PrintArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int n; 

    int arr[]  = {1, 2, 3, 4, 3};
    // it store the size  of array  with dynamic
    n = sizeof(arr)/ sizeof(int);
   int dup =  FindDuplicate(arr,n);
    cout << " Duplicate is : " << dup << endl;
    PrintArray(arr, n);
    return 0;
}