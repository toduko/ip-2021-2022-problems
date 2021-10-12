/*
Прочетете 5-цифрено число. Изведете 1 ако е палиндром и 0 ако не е.
*/

#include <iostream>

using namespace std;

void solution()
{
  int num;
  cin >> num;
  if ((num >= 10000) && (num <= 99999))
  {
    cout << (((num % 10) == (num / 10000)) && (((num / 10) % 10) == ((num / 1000) % 10))) << endl;
  }
  else
  {
    cout << "Number is not five digit.\n";
  }
}

int main()
{
  solution();

  return 0;
}