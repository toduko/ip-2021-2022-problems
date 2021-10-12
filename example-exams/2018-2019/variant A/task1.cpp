/*
Подниз на даден символен низ s наричаме всяка непрекъсната последователност от символи в s, включително празния низ и самия s.
Да се дефинира функция unsigned longestSequence (char* s), която намира дължината на най-дългия подниз на s, който се състои от еднакви букви.
Пример: за низа "abbbcc", това е числото 3, а за низа "abc" — числото 1. 
*/
#include <iostream>

using namespace std;

unsigned strLen(char *s)
{
  unsigned size = 0;
  while (s[size++])
    ;

  return size - 1;
}

unsigned longestSequence(char *s)
{
  unsigned l_s = 0, n = strLen(s);

  for (int i = 0, j = 0; i < n; ++j)
  {
    if (s[i] == s[j])
      l_s = (l_s > (j - i + 1)) ? l_s : (j - i + 1);
    else
      i = j;
  }
  return l_s;
}

int main()
{
  char s1[] = "abbbcc";
  char s2[] = "abc";
  cout << longestSequence(s1) << endl;
  cout << longestSequence(s2) << endl;

  return 0;
}