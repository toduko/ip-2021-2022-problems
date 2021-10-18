/*
От стандартния вход се въвеждат координатите (x1, y1), и (x2, y2), които описват правоъгълник в двуизмерна координатна система и координатите (x, y), които описват точка.
Да се изведе на стандартния изход "true", ако точката е в правоъгълника, и "false" в противен случай.
*/

#include <iostream>

using namespace std;

#define coord_between(a, a1, a2) ((a1 < a2) ? (a >= a1 && a <= a2) : (a >= a2 && a <= a1))

void solution()
{
  float x, x1, x2, y, y1, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x >> y;

  cout << ((coord_between(x, x1, x2) && coord_between(y, y1, y2)) ? "true" : "false") << endl;
}

int main()
{
  solution();

  return 0;
}