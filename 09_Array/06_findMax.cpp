#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2,4,5,6,7,1,9,11};
    int maxi = INT_MIN;
    for (int i = 0; i<8; i++){
        if (arr[i] >  maxi){
            maxi = arr[i];
        }
    
    }   
    cout << "Miximum is : " << maxi << endl;
    return 0;
}