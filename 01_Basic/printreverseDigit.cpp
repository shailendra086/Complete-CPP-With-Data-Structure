#include <iostream>
using namespace std;

int main() {
  //print the digit of the number in reverse order
  int n ; 
  cout << "Enter the Number "<<endl;
  cin>>n;
  cout << "Reverse Digit is : ";
  while(n!=0){
    int digit = n%10;
    cout << digit << " ";
    n /=10;
  }
  return 0;
}