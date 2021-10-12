/*
Прочетете три числа и извадете средно аритметичното им.
*/

#include <iostream>

using namespace std;

void solution()
{
  double a, b, c;
  cin >> a >> b >> c;
  cout << (a + b + c) / 3 << endl;
}

int main()
{
  solution();

  return 0;
}