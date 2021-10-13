/*
Напишете програма, която приема две цели числа изписва на конзолата дали поне едното е равно на 5 или сумата или разликата им е 5.
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  int a, b;
  cin >> a >> b;

  cout << ((a == 5 || b == 5) || (a + b == 5) || (abs(a - b) == 5)) << endl;
}

int main()
{
  solution();

  return 0;
}