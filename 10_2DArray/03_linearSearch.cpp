#include <iostream>
using namespace std;

// void PrintRowSum(int arr[][3], int row  , int col){
    
//     // row wise traversal
//     for (int  i = 0; i<row; i++){
//         int sum = 0;
//         for (int j = 0; j<col; j++){
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }


bool FindKey(int arr[][3],int row, int col, int key){

    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            if (arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}



int main() {
    int arr[3][3] = {
        {1 , 2, 3},
        {4 , 5 , 6},
        {7 , 8, 9 }
    };
    int key = 10;
    //PrintRowSum(arr,3,3);
    if (FindKey(arr,3,3,key)){
        cout << "True" << endl;
    }
    else cout << "False" << endl;
    return 0;
}