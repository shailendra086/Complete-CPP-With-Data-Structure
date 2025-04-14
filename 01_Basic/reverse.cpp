#include <iostream>
using namespace std;

int main() {
  //print the digit of the number in reverse order
  int n ; 
  cout << "Enter the Number "<<endl;
  cin>>n;
  int sum = 0;
  while(n!=0){
    int digit = n%10;
    sum = sum*10 + digit;
    n /=10;
  }
  cout << "The Reverse Digit is : " << sum << endl;
  return 0;
}