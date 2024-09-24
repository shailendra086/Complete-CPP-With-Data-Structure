#include <iostream>
using namespace std;

int Fact(int n){
    if(n==1){
        return 1;

    }
    int ans = n * Fact(n-1);
    return ans;
}




int main() {
    int n;
    cout << "Enter the value of n"<< endl;
    cin >> n;

    int ans = Fact(n);
    cout << "Ans is : " <<  ans << endl;   
    return 0;
}