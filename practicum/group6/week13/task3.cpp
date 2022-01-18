/*
Да се дефинира рекурсивна функция, която заменя всяко срещане на цифрата 5 в дадено неотрицателно цяло число с 8.
*/

#include <iostream>

using namespace std;

int change(int num)
{
  if (num)
  {
    return change(num / 10) * 10 + ((num % 10 == 5) ? 8 : (num % 10));
  }
  return 0;
}

void solution()
{
  int n;
  cin >> n;
  cout << change(n) << endl;
}

int main()
{
  solution();

  return 0;
}