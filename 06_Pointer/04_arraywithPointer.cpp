#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 2, 5, 6, 7,8,9};

    cout << "Address of the first element in the array " << &arr[0] << endl;

    cout << "Address of the array " << arr << endl;

    // value of the 0th index 
    cout << "4th " << *arr << endl;
    cout << "4th " << *arr + 1 << endl;


    cout << "4th " << (*arr)+1 << endl;
    
    

    return 0;
}