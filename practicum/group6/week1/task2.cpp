/*
Да се въведе положително число a. Да се изведе:
- лицето и обиколката на квадрат със страна a
- дължина на окръжност с радиус a
- лицето и обиколката на равностранен триъгълник със страна a
*/

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14

void solution()
{
  int num;

  cout << "a = ";

  cin >> num;

  cout << "square: p = " << num * 4 << " s = " << num * num << endl;
  cout << "circle: p = " << num * 2 * PI << endl;
  cout << "triangle: p = " << num * 3 << " s = " << num * num * sqrt(3) / 4 << endl;
}

int main()
{
  solution();

  return 0;
}