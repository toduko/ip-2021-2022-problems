/*
Напишете програма, в която се въвежда радиуса на кръг и се извежда лицето, периметъра и диаметъра на кръга. Използвайте формулите: S = pi * r * r P = 2 * pi * r
*/

#include <iostream>

using namespace std;

#define PI 3.14

void solution()
{
  double r;
  cin >> r;

  cout << "S = "
       << PI * r * r << endl;
  cout << "P = "
       << 2 * PI * r << endl;
}

int main()
{
  solution();

  return 0;
}