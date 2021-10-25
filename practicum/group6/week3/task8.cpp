/*
Въвеждат се два часа във формата HH:MM (примерно 12:34).
Да се отпечатат всички часове между по - ранния и по - късния.
*/

#include <iostream>

using namespace std;

#define swap_ints(a, b) \
  a ^= b;               \
  b ^= a;               \
  a ^= b;

void solution()
{
  unsigned short int hh1, mm1, hh2, mm2;

  cin >> hh1;
  cin.ignore(1, ':');
  cin >> mm1;

  cin >> hh2;
  cin.ignore(1, ':');
  cin >> mm2;

  if ((hh2 < hh1) || (hh1 == hh2 && (mm2 < mm1)))
  {
    swap_ints(hh1, hh2);
    swap_ints(mm1, mm2);
  }

  for (unsigned short int i = hh1; i <= hh2; ++i)
  {
    for (unsigned short int j = ((i == hh1) ? mm1 : 0); ((j < 60) && ((i == hh2) ? (j <= (mm2)) : true)); j++)
    {
      cout << ((i < 10) ? "0" : "") << i << ':' << ((j < 10) ? "0" : "") << j << endl;
    }
  }
}

int main()
{
  solution();

  return 0;
}