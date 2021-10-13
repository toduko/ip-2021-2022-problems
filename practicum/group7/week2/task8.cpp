/*
Напишете програма, която въвежда едно четирицифрено число и извежда цифрите му в обратен ред, разделение с избран от вас символ.
*/

#include <iostream>

using namespace std;

#define SEPARATOR '-'

void solution()
{
  int num;
  cin >> num;

  if (num >= 1000 && num <= 9999)
  {
    cout << num % 10 << SEPARATOR << (num / 10) % 10 << SEPARATOR << (num / 100) % 10 << SEPARATOR << (num / 1000) << endl;
  }
  else
  {
    cout << "Number is not four digit.\n";
  }
}

int main()
{
  solution();

  return 0;
}