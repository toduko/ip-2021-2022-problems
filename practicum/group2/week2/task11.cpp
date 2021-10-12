/*
Изчислете минималния покриващ правоъгълник на въведени 3 точки с целочислени координати.
Да се изведат координатите на горния ляв ъгъл на правоъгълника.
*/

#include <iostream>

using namespace std;

void solution()
{
  int x, y;
  int x_min, y_max;

  cin >> x >> y;
  x_min = x;
  y_max = y;

  cin >> x >> y;
  x_min = x < x_min ? x : x_min;
  y_max = y > y_max ? y : y_max;

  cin >> x >> y;
  x_min = x < x_min ? x : x_min;
  y_max = y > y_max ? y : y_max;

  cout << x_min << " " << y_max << endl;
}

int main()
{
  solution();

  return 0;
}