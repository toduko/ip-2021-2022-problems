/*
Прочетете три цели неотрицателни числа в интервала [0; 16384].
Намерете броя на цифрите на произведението им.
*/
#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  signed short int a, b, c;
  cin >> a >> b >> c;
  if (a > 16384 || b > 16384 || c > 16384)
  {
    cout << "One of the numbers is outside of range - [0; 16384]\n";
  }
  else
  {
    cout << (a * b * c == 0 ? 0 : (int)(log10(a) + log10(b) + log10(c) + 1)) << endl;
  }
}

int main()
{
  solution();

  return 0;
}