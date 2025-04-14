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
    sum = sum + digit;
    n /=10;
  }
  cout << "The sum of the digit is : " << sum << endl;
  return 0;
}