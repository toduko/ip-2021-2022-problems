/*
Прочетете три цели числа от конзолата a, b и c - коефициенти на квадратното уравнение ax^2 + bx + c = 0.
Пресметнете и изведете на конзолата корените му.
Забележка: Ще считаме, че въведените стойности за a, b и c са винаги такива, че уравнението има два реални корена 
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  int a, b, c;
  cin >> a >> b >> c;

  int D = b * b - 4 * a * c;
  double x1 = (-b + sqrt(D)) / (2 * a), x2 = (-b - sqrt(D)) / (2 * a);
  cout << x1 << " " << x2 << endl;
}

int main()
{
  solution();

  return 0;
}