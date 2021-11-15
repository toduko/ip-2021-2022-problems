/*
Имаме масив с дължина 2n + 1.
В него имаме n двойки от типа (k, k) и едно единствено число, което не образува такава двойка.
Напишете функция, която намира това число.
*/

#include <iostream>

using namespace std;

void solution()
{
  const int SIZE = 9;
  int arr[SIZE] = {1,
                   2,
                   3,
                   4,
                   5,
                   1,
                   3,
                   2,
                   4};

  int result = 0;

  for (int i = 0; i < SIZE; ++i)
  {
    result ^= arr[i];
  }

  cout << result;
}

int main()
{
  solution();

  return 0;
}