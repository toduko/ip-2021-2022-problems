/*
От стандартния вход се четат две четири битови числа и извежда сбора им.
*/

#include <iostream>

using namespace std;

void add_binary(int n1, int n2, bool result[], int size)
{
  int c = 0;
  for (int i = size - 1; i >= 0; --i)
  {
    const int sum_of_digits = (n1 % 10 + n2 % 10 + c);
    result[i] = sum_of_digits % 2;
    c = sum_of_digits / 2;
    n1 /= 10;
    n2 /= 10;
  }
}

void solution()
{
  const int RESULT_NUM_BITS = 4;

  unsigned int n1, n2;
  cin >> n1 >> n2;

  bool result[RESULT_NUM_BITS] = {false};
  add_binary(n1, n2, result, RESULT_NUM_BITS);

  for (int i = 0; i < RESULT_NUM_BITS; ++i)
  {
    cout << result[i];
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}