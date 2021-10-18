/*
Какво ще изведе програмата?
Защо?
*/

#include <iostream>

using namespace std;

int main()
{
  int c = 5;
  int d = (c += 3) /* c = 8 и се връща c */ + (c += 5) /* c = 13 и се връща c */;
  // d = c + c като c = 13
  cout << d;
  // d = 26

  return 0;
}