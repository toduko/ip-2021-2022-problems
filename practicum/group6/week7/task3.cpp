/*
Напишете функция, която приема число и връща броя на нулите в двоичния му запис.
*/

#include <iostream>

using namespace std;

int count_zeros(const int num, const int num_bits)
{
  unsigned int zeros = 0;

  for (int i = num_bits - 1; i >= 0; --i)
  {
    zeros += !(num & (1 << i));
  }

  return zeros;
}

void solution()
{
  int n;
  cin >> n;

  cout << count_zeros(n, 32);
}

int main()
{
  solution();

  return 0;
}