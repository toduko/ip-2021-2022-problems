/*
Да се създаде функция, която проверява дали даден текстов низ е коректен имейл.
Изискванията за коректност са поне една малка буква, поне една голяма буква, поне един символ от следните: $, &, *, !, %.
Също така трябва да завършва на @<domain>.com.
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

bool is_special_character(const char c)
{
  return (c == '$') || (c == '&') || (c == '*') || (c == '!') || (c == '%');
}

bool has_valid_domain(const char *email)
{
  for (int i = 1; email[i]; ++i)
  {
    if (email[i] == '@') {
      return false;
    }
    if (email[i] == '.')
    {
      if (email[i + 1] != 'c' || email[i + 2] != 'o' || email[i + 3] != 'm' || email[i + 4] != 0)
      {
        return false;
      }
    }
  }

  return true;
}

bool is_valid(const char *email)
{
  unsigned char validity = 0;

  int i;
  for (i = 0; email[i] != '@'; ++i)
  {
    if (is_uppercase(email[i]))
    {
      validity |= 1;
    }
    else if (is_lowercase(email[i]))
    {
      validity |= 2;
    }
    else if (is_special_character(email[i]))
    {
      validity |= 4;
    }
  }

  if (has_valid_domain(email + i))
  {
    validity |= 8;
  }

  return validity == 15; // 00001111
}

void solution()
{
  cout << is_valid("J!ohn_doe@@mail.com") << endl;
}

int main()
{
  solution();

  return 0;
}