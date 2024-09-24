#include <iostream>
#include<limits.h>
using namespace std;

void FindMin (int arr[], int n , int i , int& mini){
    if(i>=n){
        return;

    }
    if(arr[i]<mini){
        mini = arr[i];
    }
    FindMin(arr,n,i+1,mini);
}


int main() {
     int arr[] = { 21,4,5,6,4,78,14,56};
    int n = 8;
    int i = 0;
    int mini = INT_MAX;
    FindMin(arr,n,i,mini);

    cout << "The maximum number is :" << mini << endl;
    return 0;
}
   