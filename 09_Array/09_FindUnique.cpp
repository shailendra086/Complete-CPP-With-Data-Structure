#include <iostream>
using namespace std;
#include<vector>


int findUnique(vector<int> arr,int n){
    int ans = 0;
    for (int i = 0; i<n;i++ ){
         ans = ans ^ arr[i];
    }
    return ans;
}





int main() {
    
    int n ; 
    cout << "Enter the element in the array" << endl;
    cin>> n;
    vector<int> arr(n);
    cout << "Enter the element in the array" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
   int ans = findUnique(arr,n);
   cout << "The Unique element is : " << ans << endl;

    return 0;
}