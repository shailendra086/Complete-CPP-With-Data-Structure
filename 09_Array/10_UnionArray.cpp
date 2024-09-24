#include <iostream>
#include<vector>
using namespace std;

int main() {
    int arr[5] = {2 ,4,6,8,8};
    int brr[5] = {1,3,5,2,4};
    vector<int>ans;
    
    for (int i = 0; i < 5; i++){
        ans.push_back(arr[i]);
        arr[i] = -1;
    }

    for (auto i :ans){
        cout << i << " " ;
    }  
    return 0;
}