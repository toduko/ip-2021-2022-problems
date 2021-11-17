/*
Напишете функция, която приема число и връща 1 ако то има поне две повтарящи се цифри.
Функцията връща 0 в противен случай.
*/

#include <iostream>
#include <cmath>

using namespace std;

void set_bit(unsigned short int &num, unsigned char bit)
{
  num |= 1 << bit;
}

unsigned int get_bit(unsigned short int num, unsigned char bit)
{
  return (num & (1 << bit));
}

bool has_repeating_digits(int num)
{
  unsigned short int flags;
  while (num)
  {
    int l_digit = num % 10;

    if (!get_bit(flags, l_digit))
    {
      set_bit(flags, l_digit);
    }
    else
    {
      return true;
    }

    num /= 10;
  }

  return false;
}

void solution()
{
  int num;
  cin >> num;

  cout << has_repeating_digits(num) << endl;
}

int main()
{
  solution();

  return 0;
}