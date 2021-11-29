/*
Да се напише функция, която приема изречение под формата на символен низ и изтрива ненужните интервали между думите
*/

#include <iostream>

using namespace std;

void remove_spaces(char *str)
{
  int count = 0;

  for (int i = 0; str[i]; ++i)
  {
    if (str[i] != ' ')
    {
      str[count++] = str[i];
    }
  }

  str[count] = 0;
}

void solution()
{
  char str[128];

  cin.getline(str, 128);

  remove_spaces(str);

  cout << str;
}

int main()
{
  solution();

  return 0;
}