/*
При въведено число n да се изведе следната форма:
Вход: 12
*
**
***
****
*****
******
*******
********
*********
**********
***********
************
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int num;
  cin >> num;

  for (int i = 1; i <= num; ++i)
  {
    for (int j = 1; j <= i; ++j)
    {
      cout << '*';
    }
    cout << endl;
  }
}

int main()
{
  solution();

  return 0;
}