/*
Какво ще изведе програмата?
Защо?
*/

#include <iostream>

using namespace std;

int main()
{
  int c = 5;
  cout << ((c == 6) /* връща 0 и се прави проверка на следваюото условие */ || (c / 0) /* дава грешка */);

  return 0;
}