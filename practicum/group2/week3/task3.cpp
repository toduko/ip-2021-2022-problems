/*
Прочетете един символ от конзолата и изведете дали е главна буква, малка буква, цифра или друг символ.
*/

#include <iostream>

using namespace std;

void solution()
{
  char c;
  cin >> c;
  if (c >= 'a' && c <= 'z')
  {
    cout << "Lowercase";
  }
  else if (c >= 'A' && c <= 'Z')
  {
    cout << "Uppercase";
  }
  else if (c >= '0' && c <= '9')
  {
    cout << "Number";
  }
  else
  {
    cout << "Symbol";
  }
  cout << endl;
}

int main()
{
  solution();
  
  return 0;
}