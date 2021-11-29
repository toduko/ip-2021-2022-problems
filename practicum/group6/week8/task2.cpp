/*
Да се напише програма, която въвежда символен низ с максимална дължина 20 символа и извежда низ, в който всяка малка буква е заменена с голяма, а другите символи са непроменени.
*/

#include <iostream>

using namespace std;

void to_uppercase(char *str)
{
  for (int i = 0; str[i] != 0; ++i)
  {
    if ((str[i] >= 'a') && (str[i] <= 'z'))
    {
      str[i] &= ~32;
    }
  }
}

void solution()
{
  char str[20] = {0};

  cin.getline(str, 20);

  to_uppercase(str);

  cout << str << endl;
}

int main()
{
  solution();

  return 0;
}