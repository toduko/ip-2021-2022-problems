/*
Въведете две положителни числа X и Y. Изведете на екрана техните:
- сбор
- разлика
- произведение
- частното на X с Y, закръглено отдолу
- частното на X с Y, закръглено отгоре
- Y повдигнато на степен корен квадратен от X
- остатъка при деление на първото с второто число
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  unsigned int x, y;

  cin >> x >> y;

  cout << x + y << endl;
  cout << x - y << endl;
  cout << x * y << endl;
  cout << x / y << endl;
  cout << x / y + (x % y != 0) << endl;
  cout << pow(y, sqrt(x)) << endl;
  cout << x % y << endl;
}

int main()
{
  solution();

  return 0;
}