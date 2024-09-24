#include <iostream>
using namespace std;


int LinearSearch(int arr[] , int n ,  int key){
            for (int i = 0; i<n; i++){
                if (arr[i] == key){
                    return i;
                }
            }
            return 0;
}



int main() {
    int n ;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[100];
    cout << "Enter the Element in the arrray" << endl;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    } 
    int key;
    cout << "Enter the key element : " << endl;
    cin >> key;
    int index = LinearSearch(arr,n, key);
    if (index){
        cout << "Element is found as index : " << index << endl;

    }
    else cout << "Element is not found in the array" << endl;
    return 0;
}