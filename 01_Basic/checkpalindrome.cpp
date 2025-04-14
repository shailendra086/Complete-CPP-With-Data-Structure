#include <iostream>
using namespace std;

bool ispalindrome(int n)
{
  int z = n;
  int sum = 0;
  while (n != 0)
  {
    int dig = n % 10;
    sum = sum * 10 + dig;
    n /= 10;
  }
  if (z == sum)
  {
    return true;
  }
  return false;
}

int square(int a, int b)
{
  int ans = a * a + b * b + 2 * a * b;
  return ans;
}

char afterchar(char a)
{
  if (a == 'z')
  {
    return 'a';
  }
  else
    return (a + 1);
}
int main()
{
  cout << ispalindrome(121) << endl;
  cout << square(2, 2) << endl;
  cout << afterchar('z');
  return 0;
}