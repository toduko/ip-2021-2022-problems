/*
Напишете програма, която въвежда две числа a и b и разменя стойностите им:
- чрез аритметични операции
- чрез помощна променлива
- чрез побитови операции и САМО а и b **
*/

#include <iostream>

using namespace std;

void solution1()
{
  int a, b;
  cin >> a >> b;

  // * може да се замени с + и / с -
  a = a * b;
  b = a / b;
  a = a / b;

  cout << a << endl;
  cout << b << endl;
}

void solution2()
{
  int a, b;
  cin >> a >> b;

  int temp = a;
  a = b;
  b = temp;

  cout << a << endl;
  cout << b << endl;
}

void solution3()
{
  int a, b;
  cin >> a >> b;

  a ^= b;
  b ^= a;
  a ^= b;

  cout << a << endl;
  cout << b << endl;
}

int main()
{
  solution1();
  solution2();
  solution3();

  return 0;
}