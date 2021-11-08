/*
Напишете функция която приема цяло число n и извежда на стандартния изход всички наредени двойки (i, j) където 1 ≤ i, j ≤ n.
*/

#include <iostream>

using namespace std;

void print_pairs_between(unsigned int start, unsigned int end)
{
  for (int i = start; i <= end; ++i)
  {
    for (int j = start; j <= end; ++j)
    {
      cout << "(" << i << ", " << j << ")\n";
    }
  }
}

void solution()
{
  unsigned int n;
  cin >> n;

  print_pairs_between(1, n);
}

int main()
{
  solution();

  return 0;
}