#include <iostream>
using namespace std;

int main() {
    int arr [8] = { 1,3,4,6,7,8,9,11};
    int size = 8;
    bool flag = 0;
    // initial hm log not found le lete h 
    // agr mil jaye to true ho jayega 
    int key = 7;
    for (int i = 0; i<size; i++){
        if (arr[i] == key)
        flag = 1;
    }
    if (flag ){
        cout << "found " << endl;
    }
    else cout << "not found " << endl;
    return 0;
}