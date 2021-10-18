/*
Да се въведат три числа и да се изведат на стандартния изход в нарастващ ред.
*/

#include <iostream>

using namespace std;

#define swap_ints(a, b) \
  a ^= b;               \
  b ^= a;               \
  a ^= b;

void solution()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b)
  {
    swap_ints(a, b);
  }
  if (b > c)
  {
    swap_ints(b, c);
  }
  if (a > b)
  {
    swap_ints(a, b);
  }

  cout << a << " " << b << " " << c << endl;
}

int main()
{
  solution();

  return 0;
}