#include <iostream>
using namespace std;

int NthFibonacci(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int ans = NthFibonacci(n - 1) + NthFibonacci(n - 2);
    return ans ;
}



int main() {
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
     int ans = NthFibonacci(n);
    cout << "Ans : "  << ans << endl;
    return 0;
}