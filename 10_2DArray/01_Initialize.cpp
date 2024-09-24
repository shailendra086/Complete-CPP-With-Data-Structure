#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    //input in row wisee 

    // for (int i = 0; i<3; i++){
    //     for (int j = 0; j<3; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // input the array in col wise 
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            cin >> arr[j][i];
        }
    }


    //  printing the array in row wise;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}