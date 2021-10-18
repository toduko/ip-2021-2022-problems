/*
Дадени са n лева. Да се изведе на конзолата как може да се разпределят по банкноти така, че да имаме минимален брой банкноти.
В условието приемаме, че имаме банкноти от 1 и 2 лева.
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int n, ones = 0, twos = 0, tens = 0, fives = 0, twenties = 0, fifties = 0, hundreds = 0;

  cin >> n;

  if (n >= 100)
  {
    hundreds = n / 100;
    n %= 100;
  }
  if (n >= 50)
  {
    fifties = n / 50;
    n %= 50;
  }
  if (n >= 20)
  {
    twenties = n / 20;
    n %= 20;
  }
  if (n >= 10)
  {
    tens = n / 10;
    n %= 10;
  }
  if (n >= 5)
  {
    fives = n / 5;
    n %= 5;
  }
  if (n >= 2)
  {
    twos = n / 2;
    n %= 2;
  }
  ones = n;
  cout << "100 * " << hundreds
       << ", 50 * " << fifties
       << ", 20 * " << twenties
       << ", 10 * " << tens
       << ", 5 * " << fives
       << ", 2 * " << twos
       << ", 1 * " << ones << endl;
}

int main()
{
  solution();

  return 0;
}