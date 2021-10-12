/*
По въведени две числа, разменете стойностите им и ги изведете на екрана. (Бонус: Без ползване на допълнителна променлива)
*/

#include <iostream>

using namespace std;

void solution()
{
  double a, b;
  cin >> a >> b;

  // * може да се замени с +, и делението с -
  a = a * b;
  b = a / b;
  a = a / b;

  cout << a << " " << b << endl;
}

int main()
{
  solution();

  return 0;
}