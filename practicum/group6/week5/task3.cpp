/*
Използвайки задача втора, намерете най - малкото общо кратно.
*/

#include <iostream>

using namespace std;

void swap_ints(int &a, int &b)
{
  a ^= b;
  b ^= a;
  a ^= b;
}

int gcd(int a, int b)
{
  if (a > b)
  {
    swap_ints(a, b);
  }

  while (b)
  {
    int mod = a % b;
    a = b;
    b = mod;
  }

  return a;
}

int lcm(int a, int b)
{
  int c = gcd(a, b);

  return (a + b) / c;
}

void solution()
{
  int a, b, result;
  cin >> a >> b;
  
  result = lcm(a, b);

  cout << result << endl;
}

int main()
{
  solution();

  return 0;
}