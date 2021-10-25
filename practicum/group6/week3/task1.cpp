/*
Напишете програма, която по въведено цяло положително число N извежда дали е просто.
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  int num;
  cin >> num;

  double sqrt_num = sqrt(num);
  bool isPrime = true;

  for (int i = 2; i <= sqrt_num; ++i)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  cout << (isPrime ? "yes" : "no") << endl;
}

int main()
{
  solution();

  return 0;
}