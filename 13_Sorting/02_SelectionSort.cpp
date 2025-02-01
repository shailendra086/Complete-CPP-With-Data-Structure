#include <iostream>
using namespace std;

int main() {
    int arr[]= {4,6,2,1,8,3};
    int n = 6;


    for(int i = 0; i<n; i++){

        int si = i;

        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[si]){
                si = j;
            }
            
        }
       

        swap(arr[i],arr[si]);


    }
   cout << "After Sorting the Array" << endl;

    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}