/*
Да се изведат всички числа в интервала [a..b] за които сумата и произведението от цифрите им е равно.
*/

#include <iostream>

using namespace std;

bool sum_equals_product(int num) {
  int sum = 0;
  int product = 1;

  while (num)
  {
    sum += num % 10;
    product *= num % 10;
    num /= 10;
  }

  return sum == product;
}

void swap_ints(unsigned int a, unsigned int b)
{
  a ^= b;
  b ^= a;
  a ^= b;
}

void find_nums(unsigned int start, unsigned int end)
{
  while (start <= end)
  {
    if (sum_equals_product(start))
    {
      cout << start << endl;
    }
    ++start;
  }
}

void solution()
{
  unsigned int a, b;
  cin >> a >> b;

  if (a > b)
  {
    swap_ints(a, b);
  }

  find_nums(a, b);
}

int main()
{
  solution();

  return 0;
}