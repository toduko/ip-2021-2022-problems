/*
Напишете функция която приема две числа n и m и връща цифрата на m-та позиция в числото n.
*/

#include <iostream>

using namespace std;

int mth_digit(int n, int m)
{
  for (; m > 0; --m, n /= 10)
  {
  }

  return n % 10;
}

void solution()
{
  int n, m;
  cin >> n >> m;

  int result = mth_digit(n, m);

  cout << result << endl;
}

int main()
{
  solution();

  return 0;
}