/*
При въведено число n, ако n е четно, добавяме единица към него. Искаме да изведем пясъчен часовник
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int n;
  cin >> n;

  n += (n & 1);

  for (int i = n - 1; i > 0; i -= 2)
  {
    for (int j = 0; j < n - i; j += 2)
    {
      cout << " ";
    }
    for (int j = 0; j < i; ++j)
    {
      cout << '*';
    }
    cout << endl;
  }

  for (int i = 1; i < n; i += 2)
  {
    for (int j = 0; j < n - i; j += 2)
    {
      cout << " ";
    }
    for (int j = 0; j < i; ++j)
    {
      cout << '*';
    }
    cout << endl;
  }
}

int main()
{
  solution();

  return 0;
}