#include <iostream>
#include<limits.h>
using namespace std;

int solve(int n , int x , int y , int z){
    // base case 
    if(n == 0)
   
    return 0 ;
    /// agr n zero se  kam hoto hm int min return krdenge
    
    if(n<0) return INT_MIN;
    int ans = INT_MIN;


    // sab mese calculate krenge ki kaun sa part
    int ans1 = solve(n-x, x , y,z) +1;
    int ans2 = solve(n-y, x , y,z) +1;
    int ans3 = solve(n-z, x , y,z) +1;

    // max update krlenge ans mese

     return ans = max(ans1,max(ans2,ans3)); 
}


int main() {
    int n = 7;
    int x = 5; 
    int y = 2;
    int z = 2;
   
    int ans = solve(n , x , y,z);
    // agar ans negative hoto o se replace kr denge

    if(ans<0) ans = 0;
    cout << "Ans is : " << ans << endl;
    return 0;
}