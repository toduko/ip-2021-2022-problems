/*
Въвеждат се n цели числа.
Да се отпечата да конзолата броят на простите числа, както и самите те.
*/

#include <iostream>

using namespace std;

void set_flags(bool flags[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    flags[i] = true;
  }
}

void prime_sieve(bool flags[], int size)
{
  flags[0] = flags[1] = false;

  for (int i = 2; i < size; i++)
  {
    if (!flags[i])
    {
      continue;
    }
    int multiples_of_i = i + i;
    while (multiples_of_i < size)
    {
      flags[multiples_of_i] = false;
      multiples_of_i += i;
    }
  }
}

void solution()
{
  const int ARR_SIZE = 1000;
  bool flags[ARR_SIZE];

  set_flags(flags, ARR_SIZE);
  prime_sieve(flags, ARR_SIZE);

  for (int i = 0; i < ARR_SIZE; ++i)
  {
    if (flags[i])
    {
      cout << i << " ";
    }
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}