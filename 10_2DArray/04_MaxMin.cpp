#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int FindMax(int arr[][3], int row , int col){
    int maxi = INT_MIN;
    for(int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            if (arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}



int FindMini(int arr[][3], int row , int col){
    int mini = INT_MAX;
    for(int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            if (arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}


int main() {
    int arr[3][3] = {
        {1 , 2, 3},
        {4 , 5 , 6},
        {7 , 8, 9 }
    };
    
    //PrintRowSum(arr,3,3);
    int maximum = FindMax(arr,3,3);
    cout << "Maximum Element is " << maximum << endl;
    int mini = FindMini(arr,3,3);
    cout << "Minimum Element is " << mini << endl;
    return 0;
}