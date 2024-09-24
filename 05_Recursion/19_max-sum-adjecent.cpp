#include <iostream>
using namespace std;
#include<limits.h>
#include<vector>


void solve(vector<int>& arr , int i , int sum , int& maxi){
    // base case
    if(i>=arr.size()){
        maxi = max (sum , maxi);
        return;
    }

    // include wala part
    solve(arr,i+2,sum+arr[i],maxi);

    // Exclude wala Part
    solve(arr,i+1,sum , maxi);

}


int main() {
    vector<int> arr = {2,1,4,9};
    int sum = 0;
    int maxi = 0;
    int i = 0;
    solve(arr, i , sum , maxi);

    cout << "Ans is : "<< maxi << endl;
    return 0;
}