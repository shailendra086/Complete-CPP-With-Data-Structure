#include <iostream>
using namespace std;

bool isSorted(int arr[],int n , int i){
    // creating the base case
    if(i == n - 1)
    return true;
    if(arr[i+1]<arr[i]){
        return false;
    }
    return isSorted(arr,n,i+1);

}



int main() {
    int arr[] = { 10,20,34,42,56,57,78};
    int n = 8;
    int i = 0;
    bool isSort = isSorted(arr,n,i);
    if(isSort) cout << "Array is sorted" << endl;
    else cout << "not sorted " << endl;
    return 0;
}