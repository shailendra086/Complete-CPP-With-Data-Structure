#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *ptr = &n;
    // print value
    cout << "value of n is : " << n << endl;
    // addres of num 
    cout << "addres : " << ptr << endl;
    // print value which is stored in this address
    cout << "val is : " << *ptr << endl;
    // increment
    ( *ptr)++;
    cout << "value of n is : " << n << endl;

    // copy a pointer
    int *q = ptr;
    cout << "Addres of n " << q << endl;
    cout << "value of n " << *q << endl;
    return 0;
}