#include <iostream>
using namespace std;


void PrintArray(int arr[][3], int row,int col){
    cout << "After Matrix Multiplication :" << endl;
    for (int i =0; i<row; i++){
        for (int  j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int c[3][3];

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            c[i][j]=0;
            for (int k = 0; k<3; k++){
                // here we multiply and store them in c matrix
                c[i][j] = c[i][j]+ a[i][k] * b[k][j];
            }
        }
    }

    PrintArray(c,3,3);
    return 0;
}   