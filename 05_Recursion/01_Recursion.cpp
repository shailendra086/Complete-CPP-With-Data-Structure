#include <iostream>
using namespace std;


int Factorial(int n){
    // base case 
    if(n == 1){
        return 1;
    }

    return n * Factorial(n-1);

}



int main() {
    int n;
    cout << "Enter the value of n " << endl;

    cin >> n;
    int ans = Factorial(n);

    cout << "The factorial of " << n << " is : " << ans << endl;
    return 0;
}