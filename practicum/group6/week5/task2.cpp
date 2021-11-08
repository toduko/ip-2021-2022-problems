/*
Напишете функция, която приема 2 цели числа и пресмята най-големия им общ делител.
Използвайте алгоритъм на евклид.
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

void solution()
{
  int a, b;
  cin >> a >> b;

  cout << gcd(a, b) << endl;
}

int main()
{
  solution();

  return 0;
}