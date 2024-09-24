#include <iostream>
using namespace std;


bool FindChar(string str , int n , int key , int i  ){
    if(i>=n){
        return false;;
    }

    if(str[i]== key){
        return true;
    }

    return FindChar(str,n ,key ,i+1);
}



int main() {
    string str = "shailendra";
    char key = 'z';
    int n = str.length();
    int i = 0; 
    bool ans = FindChar(str,n,key,i);
    cout << "Answer is : " << ans << endl;
    return 0;
}