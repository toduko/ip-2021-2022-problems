/*
Шифърът на Цезар е една от най-простите техники за криптиране.
Има параметер offset (цяло число), което е броят на буквите, с които всяка буква в английската абзука е отместена.
Например, в шифър с отместване 2, буквата a би станала c.
Буквата z би станала b.
Шифър с отместване 0 значи, че всички букви остават непроменени.
Всички символи, които не са букви остават непроменени.
Създайте функции, които извършват криптиране и декриптиране на даден низ използвайки шифъра на Цезар
*/

#include <iostream>

using namespace std;

bool is_uppercase(const char c)
{
  return ((c >= 'A') && (c <= 'Z'));
}

bool is_lowercase(const char c)
{
  return ((c >= 'a') && (c <= 'z'));
}

bool is_letter(const char c)
{
  return (is_lowercase(c) || is_uppercase(c));
}

void crypt(char *str, int offset)
{
  offset = offset % 26;

  for (int i = 0; str[i]; ++i)
  {
    if (is_letter(str[i]))
    {
      const char A = is_uppercase(str[i]) ? 'A' : 'a';
      const char Z = is_uppercase(str[i]) ? 'Z' : 'z';

      str[i] += offset;

      if (!is_letter(str[i]))
      {
        if (offset > 0)
        {
          str[i] = A + (str[i] - Z);
        }
        else
        {
          str[i] = Z - (A - str[i]) + 1;
        }
      }
    }
  }
}

void solution()
{
  char str[128];
  int offset;

  cout << "Enter string: ";
  cin.getline(str, 128);

  cout << "Enter offset: ";
  cin >> offset;

  crypt(str, offset);

  cout << str << endl;

  crypt(str, -offset);

  cout << str << endl;
}

int main()
{
  solution();

  return 0;
}