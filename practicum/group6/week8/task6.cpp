/*
Напишете функция, която проверява дали всички букви в символен низ са уникални.
*/

#include <iostream>

using namespace std;

bool is_unique(const char *str)
{
  unsigned char flags[32];

  for (int i = 0; str[i]; ++i)
  {
    unsigned const char ARR_POS = str[i] / 8;
    unsigned const char BIT_POS = str[i] % 8;

    if (flags[ARR_POS] & (1 << BIT_POS))
    {
      return false;
    }

    flags[ARR_POS] |= (1 << BIT_POS);
  }

  return true;
}

void solution()
{
  cout << is_unique("abcdefghijklmnopqrstuvwxyz ") << endl;
}

int main()
{
  solution();

  return 0;
}