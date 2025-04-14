#include <iostream>
using namespace std;

int prod(int a, int b){
  return a*b;
}

int main() {
  int n = prod(10,5);
  cout << "Product is " << n << endl;
  return 0;
}