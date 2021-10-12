/*
Напишете програма, която намира най-голямото произведение, което може да се получи след поставянето на знак за умножение между две от цифрите на цяло положително трицифрено число.
*/

#include <iostream>

using namespace std;

#define variant1(num) ((num / 100) * (num % 100))
#define variant2(num) ((num / 10) * (num % 10))

void solution()
{
  unsigned int num;
  cin >> num;

  if (num < 100 && num > 999)
  {
    cout << "Number is not three digit.\n";
  }
  else
  {
    cout << ((variant1(num) > variant2(num)) ? variant1(num) : variant2(num)) << endl;
  }
}

int main()
{
  solution();

  return 0;
}