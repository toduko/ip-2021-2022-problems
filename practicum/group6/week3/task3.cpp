/*
Въведете n на брой цифри.
Изведете числото, което образуват.
N се въвежда от клавиатурата.
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int n;
  cin >> n;

  int num = 0;

  for (int i = 0; i < n; ++i)
  {
    unsigned int curr;
    cin >> curr;

    num = (num *= 10) + curr;
  }

  cout << num << endl;
}

int main()
{
  solution();

  return 0;
}