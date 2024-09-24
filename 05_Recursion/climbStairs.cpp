#include <iostream>
using namespace std;


int ClimbStairs(int n){
    // base casee
    if(n==0 || n == 1){
        return 1;
    }
    return ClimbStairs(n-1) + ClimbStairs(n-2);
}


int main() {
    int n ; 
    cout << "Enter the value of n " << endl;
    cin>> n;

    int ans = ClimbStairs(n);
    cout << "Answer is : " << ans << endl;
    return 0;
}