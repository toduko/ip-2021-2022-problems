/*
В по - долната таблица е представена глобата, която водачът получава, при превишена скорост.
Да се изведе получената глоба при въведена скорост.
| 50 | 70 | 90 | 110 | 130 | 160 |
|  0 | 20 | 50 | 150 | 350 | 700 |
*/

#include <iostream>

using namespace std;

#define n_between(n, a, b) ((n >= a) && (n < b))

void solution()
{
  unsigned int speed;
  cin >> speed;

  if (n_between(speed, 70, 90))
  {
    cout << 20;
  }
  else if (n_between(speed, 90, 110))
  {
    cout << 50;
  }
  else if (n_between(speed, 110, 130))
  {
    cout << 150;
  }
  else if (n_between(speed, 130, 160))
  {
    cout << 350;
  }
  else if (speed >= 160)
  {
    cout << 700;
  }
  else
  {
    cout << 0;
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}