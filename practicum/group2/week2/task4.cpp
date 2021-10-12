/*
Въведете 3 произволни петцифрени числа и изведете третите им цифри.
*/

#include <iostream>

using namespace std;

#define is_five_digits(num) ((num >= 10000) && (num <= 99999))
#define third_digit(num) ((num / 100) % 10)

void solution()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (is_five_digits(a) && is_five_digits(b) && is_five_digits(c))
    cout << third_digit(a) << third_digit(b) << third_digit(c) << endl;
  else
    cout << "Not all numbers are five digits\n";
}

int main()
{
  solution();

  return 0;
}