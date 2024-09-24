#include <iostream>
#include<vector>
using namespace std;

int FindPivot(vector<int>arr){
    int s = 0;
    int e = arr.size()  - 1;
    int mid = s + (e-s)/2;
    while (s<=e){
        if(s==e){
            return s ;
        }
        if(arr[mid] > arr[mid+1]){
            return mid ;
        }
        if(arr[mid] < arr[mid-1]){
            return mid - 1;
        }
        if(arr[mid] < arr[mid+1]){
            e = mid -1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int BinarySearch(vector<int>arr,int s , int e , int target){
    int mid = s  + (e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            s = mid + 1;

        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}




int main() {
    vector<int>arr{7,8,9,1,2,3,4};

    int Pivotindex = FindPivot(arr);
    int target = 8;
    int ans =0;
    cout <<  "Pivot index is :" << Pivotindex << endl;
    if(target>=arr[0] && target <= arr[Pivotindex]){
        ans = BinarySearch(arr,0,Pivotindex,target);
    }
    else {
        ans = BinarySearch(arr,Pivotindex+1,arr.size()-1,target);
    }
    if(ans == -1){
        cout << "Element is not found : " << endl;
    }
    else 
    cout << "The Element is found at index "<< ans << endl;
    return 0;
}