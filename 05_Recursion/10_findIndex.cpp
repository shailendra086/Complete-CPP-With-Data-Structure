#include <iostream>
#include<vector>
using namespace std;


vector<int> findIndex(string str, int n , int i , int key,vector<int>&ans){
    // find basecase 
    if(i>=n){
        return {-1} ;
    }
    if(str[i] == key){
        ans.push_back(i);
    }
     findIndex(str,n,i+1, key,ans);
     return ans ;
}




int main() {
    string str = "Shailendra";
    int n = str.length();
    int i = 0; 
    char key = 'a';
    vector<int>ans;
    findIndex(str,n, i, key, ans);
    
    for(auto val : ans){
        cout << val << " ";
    }

    return 0;
}