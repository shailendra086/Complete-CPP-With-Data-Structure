#include <iostream>
#include<vector>
using namespace std;

void mergeArray(int  arr[] ,int n , int brr[], int m){
    
    int i = 0;
    int j = 0;
    int d = n+m;
    vector<int >ans;
    while (i<n && j < m ){
        if(arr[i] < brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else {
            ans.push_back(brr[j]);
        j++;

        }

    }
    while(i<n){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<m){
        ans.push_back(brr[j]);
        j++;
    }

    for(int i =0; i<ans.size(); i++){
        cout << ans[i] << " " ;
    }
    cout <<endl;
    int sizeans = ans.size();
    if( sizeans%2 !=0){
        int median = ans[sizeans/2];
        cout << "odd median is : " << median << endl;
    }
    else {
        int index1 = (sizeans)/2 - 1 ;
        int index2 = (sizeans/2);
        cout << "value one is " << ans[index1] << " index 2 value " << ans[index2] << endl;
        int  sum = ans[index1] + ans[index2] ;
        float median = sum/2.0; 
        cout << "the even element median is " << median << endl;
    }



}



int main() {
    int arr[5] = {1,3,7,8,9} ;
    int brr[5] = {2,5,6,11,12};

    int n = 5;
    int m = 5;
    mergeArray(arr,n , brr, m);



    return 0;
}