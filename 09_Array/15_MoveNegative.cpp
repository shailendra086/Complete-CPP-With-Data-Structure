#include <iostream>
using namespace std;

void PrintArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void MoveNeg(int arr[], int size){
    // this is my method
    int low = 0; 
    int high = size - 1;

    // while (low<=high){
    //     if (arr[low]<0){
    //         low++;
    //     }
    //     else if (arr[low]>0){
    //         swap(arr[low], arr[high]);
    //         high--;
    //     }
    // }


    // second method

    while (low<high){
        if (arr[low ] < 0){
            low++;
        }
        else if (arr[high] > 0){
            high--;
        }
        else swap(arr[low], arr[high]);
    }


}



int main() {
    int arr[8] = {2 , -2, 3 , -4, -1 , 4, 7,-9};

    MoveNeg(arr,8);
    PrintArray(arr,8);
    return 0;
}