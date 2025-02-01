#include <iostream>
using namespace std;

int main() {
    int arr[]= {4,6,2,1,8,3};
    int n = 6;


    for(int i=0; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while(prev >=0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1]= curr;
    }


   cout << "After Sorting the Array" << endl;

    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}