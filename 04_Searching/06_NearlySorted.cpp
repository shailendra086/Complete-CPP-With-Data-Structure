#include <iostream>
using namespace std;

int NearlySorted(int arr[],int size ,int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while (s<=e){
        if(arr[mid] == target){
            return mid;
        }
         if ( (mid - 1 >= s) && arr[mid - 1] == target){
            return mid - 1;
        }
        if ( (mid + 1) <= e && arr[mid + 1] == target){
            return mid + 1;
        }
        if (arr[mid] < target){
            s = mid +  2;
        }
        else {
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {
    // search in a nearly sorted array 

    int arr[] = {10,3,40,20,50,80,70};
    int size = sizeof(arr)/ sizeof(int);
    int target = 10 ;
    int index = NearlySorted(arr,size,target);   
   cout << index << endl;
    return 0;
}