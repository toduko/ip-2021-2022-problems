/*
Да се изведат всички числа в интервала [a..b] за които сумата и произведението от цифрите им е равно.
*/

#include <iostream>

using namespace std;

int sum_of_digits(int num)
{
  int sum = 0;
  while (num)
  {
    sum += num % 10;
    num /= 10;
  }

  return sum;
}

int product_of_digits(int num)
{
  int product = 1;
  while (num)
  {
    product *= num % 10;
    num /= 10;
  }

  return product;
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
    if (sum_of_digits(start) == product_of_digits(start))
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