#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 1 , 2, 3, 5, 6, 7, 8, 9, 12, 10};
    int sum = 13; 

    for (int i = 0; i<10; i++){

        for (int j = i+1; j < 10; j++){
            
            for (int k = j+1; k < 10; k++){
                if (arr[i] + arr[j] + arr[k] == sum){
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}