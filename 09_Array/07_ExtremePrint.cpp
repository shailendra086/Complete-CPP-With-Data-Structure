#include <iostream>
using namespace std;

int main() {
    int arr[8] = {2,4,5,6,7,1,9,11};
    int start = 0; 
    int end = 8 - 1; 
    while (start <= end ){
        if (start == end){
            cout << arr[start] << " " << endl;
        }
        else {
            cout << arr[start] << " " << arr[end] << endl;
        }
        start++; 
        end--;
    }
    return 0;
}