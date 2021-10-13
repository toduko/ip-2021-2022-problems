/*
Напишете програма, която смята лицето на триъгълник:
- По дадени страна и височина към нея
- Използвайки Хероновата формула
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  unsigned int a, b, c, h;
  cout << "Enter a and ha: ";
  cin >> a >> h;

  cout << a * h / 2. << endl;

  cout << "Enter a, b and c: ";
  cin >> a >> b >> c;

  double h_p = (a + b + c) / 2.;
  cout << sqrt((h_p - a) * (h_p - b) * (h_p - c) * h_p) << endl;
}

int main()
{
  solution();

  return 0;
}