#include <iostream>
using namespace std;

int factorial(int n){
  int ans = 1;
  while(n!=0){
    ans *=n;
    n--;
  }
  return ans;
}

int main() {
  int n ;
  cin>>n;

  int ans = factorial(n);
  cout << "Factorial of n is : " << ans << endl;
  return 0;
}