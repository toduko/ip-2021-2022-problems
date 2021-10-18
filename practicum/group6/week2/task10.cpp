/*
Да се реши квадратно уравнение, като предварително от потребителя са въведени a, b и с където:
ax^2 + bx + c = 0
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  int a, b, c;
  cin >> a >> b >> c;

  int D = b * b - 4 * a * c;

  if (D > 0)
  {
    cout << (-b + sqrt(D)) / (2 * a) << " " << (-b - sqrt(D)) / (2 * a);
  }
  else if (D == 0)
  {
    cout << -b / (2 * a);
  }
  else
  {
    cout << -b / (2 * a) << " + " << sqrt(-D) / (2 * a) << " * i" << endl;
    cout << -b / (2 * a) << " - " << sqrt(-D) / (2 * a) << " * i";
  }

  cout << endl;
}

int main()
{
  solution();

  return 0;
}
