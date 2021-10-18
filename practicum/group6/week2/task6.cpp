/*
Какво ще изведе програмата?
Защо?
*/

#include <iostream>

using namespace std;

int main()
{
  int c = 5;
  if (c += c -= 5 /* c = 0 и връша c*/)
    // c = c + c като c = 0
    cout << (c *= 10);
  else
    cout << c;

  return 0;
}
