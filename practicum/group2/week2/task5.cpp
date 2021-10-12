/*
Прочетете 4-цифрено число. Изведете го в обратен ред.

*/

#include <iostream>

using namespace std;

void solution()
{
  int num, temp;
  cout << "a = ";
  cin >> num;

  if (((num / 10000) > 0) || ((num / 1000) == 0))
  {
    cout << "Number is not four digit\n";
  }
  else
  {
    cout << (num % 10) << ((num / 10) % 10) << ((num / 100) % 10) << ((num / 1000) % 10);
  }
}

int main()
{
  solution();

  return 0;
}