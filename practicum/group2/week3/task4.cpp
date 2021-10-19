/*
Напишете програма, която при въвеждането на число от 1 до 7 извежда деня от седмицата.
*/

#include <iostream>

using namespace std;

void solution()
{
  int n;
  cin >> n;

  switch (n)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tueday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Not a weekday";
    break;
  }
  cout << endl;
}

int main()
{
  solution();
  
  return 0;
}