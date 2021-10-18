/*
Какво ще изведе програмата?
Защо?
*/

#include <iostream>

using namespace std;

int main()
{
  int c = 5;
  cout << ((c == 6) /* връща 0 и следващото условие не се проверява */ && (c / 0));

  return 0;
}