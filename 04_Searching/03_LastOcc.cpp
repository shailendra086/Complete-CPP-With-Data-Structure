#include <iostream>
using namespace std;

int LastOcc(int arr[], int n , int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    int index = -1;
    while (s<=e){
        if(arr[mid] == target){
            index = mid;
            s = mid + 1;
        }
        else if (arr[mid] < target){
            s = mid + 1; 
        }
        else {
            e = mid - 1;
        }
        mid  = s + (e - s)/2;
    }
    return index;
}






int main() {
    int arr[]  = { 2,3,4,4,4,4,4,6,7,8};
    int n = sizeof(arr)/ sizeof(int);
    int target = 4;
    int ans = LastOcc(arr, n, target);
    cout << n; 
    return 0;
}