//remove all adjecent duplicate in the string 

#include <iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main() {
    string s = "abbaca";
    stack<char>st;
    string ans = "";
    for(int i = 0 ; i<s.size(); i++){
        if(st.empty() || st.top() != s[i]){
            st.push(i);
        }
        else st.pop();
    }
    while(!st.empty()){
        char element = st.top();
        st.pop();
        ans += element;

    }
    
    reverse(ans.begin(),ans.end());
    cout << "Ans Is : " << ans << endl;
    return 0;
}