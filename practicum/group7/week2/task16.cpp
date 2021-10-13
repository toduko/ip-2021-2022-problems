/*
Напишете програма, която приема коефициентите a, b, c на квадратно уравнение от вида ax^2 + bx + c = 0. Проверете дали има решение и го изведете на конзолата.
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  int a, b, c;
  cin >> a >> b >> c;
  
  int D = b * b - 4 * a * c;

  if (D >= 0)
  {
    cout << "x1 = " << -b + sqrt(D) / (2 * a) << endl;
    cout << "x2 = " << -b - sqrt(D) / (2 * a) << endl;
  }
  else
  {
    cout << "There are no real solutions.\n";
  }
}

int main()
{
  solution();

  return 0;
}