#include <iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while(s<=e){
        // for single element
        if(s==e){
            return s;
        }
        if( mid+1 < e && arr[mid] > arr[mid + 1]){
            return mid;
        }
        if (mid - 1 > s && arr[mid ] < arr[mid - 1]){
            return mid - 1;
        }
        if(arr[s] > arr[mid]){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}



int main() {
    vector<int> arr{9,10,2,4,6,8};
    vector <int>arr1{5};
    int ans =findPivot(arr1);
    if(ans == -1){
        cout << "Kuchh Galt hai" << endl;
    }
    else cout<< "Ans is : "  << ans << endl;
    return 0;
}