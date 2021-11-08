/*
Напишете функция, която приема малка буква и връща главна.
*/

#include <iostream>

using namespace std;

char to_uppercase(char c)
{
  return c & ~32;
}

void solution()
{
  char c;
  cin >> c;

  cout << to_uppercase(c) << endl;
}

int main()
{
  solution();

  return 0;
}