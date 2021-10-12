/*
Да се въведе буква от английската азбука. Програмата връща:
- Единица, ако буквата е гласна.
- Нула в противен случай.
Гласните букви в английската азбука са: a, i, o, u, e
*/

#include <iostream>

using namespace std;

#define to_lowercase(c) (c | 32)
#define is_letter(c) (c > 64) && (c < 91) || ((c > 96) && (c < 123))
#define is_vowel(c) (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')

void solution()
{
  char c;
  cin >> c;

  if (is_letter(c))
  {
    cout << (is_vowel(to_lowercase(c))) << endl;
  }
  else
  {
    cout << "This is not a letter\n";
  }
}

int main()
{
  solution();

  return 0;
}