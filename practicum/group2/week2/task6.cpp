/*
По подадено 3-цифрено число изведете числото кодирано чрез букви от латинската азбука както следва: (0 -> a, 1 -> b, 2 -> c, ...)
*/

#include <iostream>

using namespace std;

void solution()
{
  int num;
  cin >> num;

  if (num < 100 & num > 999)
  {
    cout << "Number is not three digit\n";
  }
  else
  {
    cout << (char)('a' + num / 100) << (char)('a' + (num / 10) % 10) << (char)('a' + num % 10) << endl;
  }
}

int main()
{
  solution();

  return 0;
}