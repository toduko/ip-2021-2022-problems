/*
Изведете на екрана всички трицифрени числа, сумата на цифрите на които е двуцифрено число.
*/

#include <iostream>

using namespace std;

void solution()
{
  for (int i = 109; i < 999; ++i)
  {
    if (((i / 100) + ((i / 10) % 10) + (i % 10)) > 9)
    {
      cout << i << endl;
    }
  }
}

int main()
{
  solution();

  return 0;
}