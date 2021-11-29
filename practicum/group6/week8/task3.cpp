/*
Да се напише функция, която приема изречение под формата на символен низ и извежда всички думи в него
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

void solution()
{
  char str[128] = {0};

  cin.getline(str, 128);

  int len = str_len(str);

  for (int i = 0, j = 1; i < len;)
  {
    cout << "word " << j << ": ";

    while (str[i] != ' ')
    {
      cout << str[i++];
    }

    ++j;
    while (str[++i] == ' ')
      ;

    cout << endl;
  }
}

int main()
{
  solution();

  return 0;
}