#include <iostream>
using namespace std;

int factorial(int n)
{
  int fact = 1;
  while (n != 0)
  {
    fact *= n;
    n--;
  }
  return fact;
}

int binomialCoff(int n, int r)
{
  int val1 = factorial(n);
  int val2 = factorial(r);
  int val3 = factorial(n - r);
  
  int result = val1 / (val2 * val3);
  return result;
}

int main()
{
  cout << binomialCoff(4, 2);
  return 0;
}