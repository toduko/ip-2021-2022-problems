/*
Напишете функция която приема променлива цяло число и чете от стандартния вход стойности за нея, докато не бъде въведена стойност над 100.
Променливата да се декларира и изведе в main().
*/

#include <iostream>

using namespace std;

void read_int(int &num)
{
  do
  {
    cin >> num;
  } while (num <= 100);
}

int main()
{
  int num;
  read_int(num);

  cout << num << endl;

  return 0;
}