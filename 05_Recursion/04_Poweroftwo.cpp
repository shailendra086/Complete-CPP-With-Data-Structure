#include <iostream>
using namespace std;

int Powertwo(int n){
    if(n==0){
        return 1;
    }

    int ans = 2 * Powertwo(n-1);
    return ans;
}


int main() {
    int n ;
    cout << "Enter the value to calculate the power of two" << endl;
    cin >> n;

    int ans = Powertwo(n);
    cout << "Ans is : " << ans << endl;
    return 0;
}