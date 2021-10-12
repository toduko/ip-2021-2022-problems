/*
Да се въведат две числа - a и b
Да се разменят стойностите им (по три начина, без да се използва функцията swap)
*/

#include <iostream>

using namespace std;

void swap1(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  cout << "1: " << a << " " << b << endl;
}

void swap2(int a, int b)
{
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "2: " << a << " " << b << endl;
}

void swap3(int a, int b)
{
  a = a * b;
  b = a / b;
  a = a / b;
  cout << "3: " << a << " " << b << endl;
}

void solution()
{
  int a, b;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  swap1(a, b);
  swap2(a, b);
  swap3(a, b);
}

int main()
{
  solution();

  return 0;
}