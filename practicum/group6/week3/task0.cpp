/*
Въведете число а. Изведете цифрите му в обратен ред.
*/

#include <iostream>

using namespace std;

void solution()
{
  int a, reverse_a = 0;
  cin >> a;

  while (a)
  {
    reverse_a = (reverse_a *= 10) + (a % 10);
    a /= 10;
  }

  cout << reverse_a << endl;
}

int main()
{
  solution();

  return 0;
}