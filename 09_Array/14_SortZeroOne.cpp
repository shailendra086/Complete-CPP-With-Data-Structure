#include <iostream>
#include<vector>

using namespace std;

int main() {
    int arr[10] = {1,0,1,0,1,0,0,0,1,0};
    //
    int n = 10;
    int start = 0; 
    // using two pointer approach
    int end = n - 1; 
    int i = 0;
    while (i != end){
        if (arr[i] == 0){
            swap (arr[i] , arr[start]);
            start++;
            i++;
        }
        else {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    for (auto i : arr){
        cout << i << " ";
    }
    return 0;
}