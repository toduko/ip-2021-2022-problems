/*
Напишете програма, която въвежда едно трицифрено число Х и извежда дали цифрата 7 се съдържа четен брой пъти в Х. (без if,for)
*/

#include <iostream>

using namespace std;

void solution()
{
  int x;
  cin >> x;

  if ((x >= 100) && (x <= 999))
  {
    // 0 се счита за четно число
    cout << !(((x % 10) % 7 == 0) ^ (((x / 10) % 10) % 7 == 0) ^ ((x / 100) % 7 == 0));
  }
  else
  {
    cout << "Number is not three digit.\n";
  }
}

int main()
{
  solution();

  return 0;
}