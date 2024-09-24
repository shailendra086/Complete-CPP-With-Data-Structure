#include <iostream>
#include<limits.h>
using namespace std;

void FindMax(int arr[],int n , int i , int& maxi){
    // base case likho bhai phle
    if(i>=n){
        return;
    }
    if(arr[i]> maxi){
        maxi = arr[i];

    }
    FindMax(arr,n,i+1,maxi);

}


int main() {
    int arr[] = { 21,4,5,6,4,78,14,56};
    int n = 8;
    int i = 0;
    int maxi = INT_MIN;
    FindMax(arr,n,i,maxi);

    cout << "The maximum number is :" << maxi << endl;
    return 0;
}