/*
Прочетете цяло число от конзолата и изведете дали се дели на 5, на 3 или нито едно от двете.
*/

#include <iostream>

using namespace std;

void solution()
{
  int num;
  cin >> num;

  if (((num % 5) == 0) && ((num % 3) == 0))
  {
    cout << num << " is divisible by 5 and 3";
  }
  else if (num % 5 == 0)
  {
    cout << num << " is divisible by 5";
  }
  else if (num % 3 == 0)
  {
    cout << num << " is divisible by 3";
  }
  else
  {
    cout << num << " is not divisible by 5 or 3";
  }
  cout << endl;
}

int main()
{
  solution();
  
  return 0;
}