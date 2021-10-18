/*
Какво ще изведе програмата?
Защо?
*/

#include <iostream>

using namespace std;

int main()
{
  int c = 5;
  double e = 0;
  cout << ((c = 6) /* връща c, което е 6 */ && (e = 1) /* връща e, което е 1 */);
  // 1
  cout << c << " " << e;
  // 6 1

  return 0;
}
