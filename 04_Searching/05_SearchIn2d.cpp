#include <iostream>
using namespace std;

bool Searching(int arr[][4],int target , int row , int col){
    int s = 0;
    int total = row *col;
    int e = total - 1;
    int mid = s + (e-s)/2;
    while(s<=e){
        //row and column
        int i = mid /col;
        int j = mid % col;
        if(arr[i][j] == target){
            cout << i << " " << j << endl;
           return true;
        }
        else if (arr[i][j] < target){
            s  = mid + 1;
        }
        else e = mid - 1;
        mid = s + (e-s)/2;
    }
    return false;
}



int main() {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; 
    int target = 11;

    int row = 3 ;

    int col = 4  ;
   int ans =  Searching(arr,target,row , col);
    if(ans){
        cout << "Element is found : " << endl;
    }
    else cout << "Element is not found" << endl;
    return 0;
}