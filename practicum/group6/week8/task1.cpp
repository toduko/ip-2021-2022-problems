/*
Да се напише функция, която проверява дали низ е симетричен.
*/

#include <iostream>

using namespace std;

int str_len(const char *str)
{
  int length = 0;

  while (str[length++])
    ;

  return length - 1;
}

bool is_symmetrical(const char *str)
{
  int l = str_len(str);

  for (int i = 0; i < l / 2; ++i)
  {
    if (str[i] != str[l - i - 1])
    {
      return false;
    }
  }

  return true;
}

void solution()
{
  char str[1024] = {0};

  cin.getline(str, 1024);

  cout << is_symmetrical(str) << endl;
}

int main()
{
  solution();

  return 0;
}