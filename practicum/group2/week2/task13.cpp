/*
Прочетете цяло неотрицателно число от конзолата и изведете броя на цифрите му.
(Бонус: Броя на цифрите на числото, записано в двоична бройна система)
*/
#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  unsigned int num;
  cin >> num;
  unsigned int count = ((num == 0) ? 1 : (log10(num) + 1));
  cout << count << endl;
  cout << !!(count & 8) << !!(count & 4) << !!(count & 2) << !!(count & 1) << endl;
}

int main()
{
  solution();

  return 0;
}