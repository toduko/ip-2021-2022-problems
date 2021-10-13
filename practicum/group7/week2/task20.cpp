/*
Да се напише програма, която въвежда символ и извежда съобщение на екрана дали символът е голяма буква, малка буква, цифра или друг символ.
*/

#include <iostream>

using namespace std;

void solution()
{
  char c;
  cin >> c;
  
  if (c >= 'A' && c <= 'Z')
  {
    cout << "Capital letter.\n";
  }
  else if (c >= 'a' && c <= 'z')
  {
    cout << "Small letter.\n";
  }
  else if (c >= '0' && c <= '9')
  {
    cout << "Digit.\n";
  }
  else
  {
    cout << "Another symbol.\n";
  }
}

int main()
{
  solution();

  return 0;
}