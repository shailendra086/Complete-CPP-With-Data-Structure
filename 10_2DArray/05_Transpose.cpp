#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Transpose(int arr[][3], int row , int col, int transpose[][3]){
    for (int i = 0; i<row; i++){
        for (int j = 0; j < col; j++){
            swap(transpose[i][j], arr[j][i]);
        }
    }
}

void PrintArray(int arr[][3], int row , int col){
    for (int i = 0; i<row;  i++){
        for (int j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int arr[3][3] = {
        {1 , 2, 3},
        {4 , 5 , 6},
        {7 , 8, 9 }
    };
    int transpose[3][3];
    Transpose(arr,3,3,transpose);
    PrintArray(transpose,3,3);
   
    return 0;
}