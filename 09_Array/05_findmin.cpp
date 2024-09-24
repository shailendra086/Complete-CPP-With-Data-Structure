#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2,4,5,6,7,1,9,11};
    int mini = INT_MAX;
    for (int i = 0; i<8; i++){
        if (arr[i] <  mini){
            mini = arr[i];
        }
    
    }   
    cout << "Minimum is : " << mini << endl;
    return 0;
}