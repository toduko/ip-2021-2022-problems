/*
Да се напише функция която приема число в десетична бройна система и го превръща в число от произволна бройна система, подадена като аргумент на функцията.
*/

#include <iostream>

using namespace std;

char get_symbol(const int num)
{
  if ((num >= 0) && (num <= 9))
  {
    return '0' + num;
  }
  else if ((num >= 10) && (num <= 35))
  {
    return 'A' + (num - 10);
  }
  else
  {
    return 'a' + (num - 36);
  }
}

void convert_base_n(int num, const int base, char result[], const int n)
{
  if (base > 62)
  {
    cout << "Base too big.\n";
  }
  else
  {
    for (int i = n - 1; num != 0; num /= base)
    {
      result[i--] = get_symbol(num % base);
    }
  }
}

#define RESULT_SIZE 10

void solution()
{
  char result[RESULT_SIZE];
  int num, base;
  cin >> num >> base;

  convert_base_n(num, base, result, RESULT_SIZE);

  for (int i = 0; i < RESULT_SIZE; ++i)
  {
    if (result[i])
    {
      cout << result[i];
    }
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}