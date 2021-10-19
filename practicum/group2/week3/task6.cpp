/*
По подадена точка A и страна на квадрат центриран в центъра на координатната система да се определи взаимното им положение.
*/

#include <iostream>

using namespace std;

void solution()
{
  double x, y;
  unsigned int a;
  cin >> x >> y >> a;

  if ((x > (a / -2.)) && (x < (a / 2.)) && (y > (a / -2.)) && (y < (a / 2.)))
  {
    cout << "The point is INSIDE the rectangle";
  }
  else if ((x < (a / -2.)) || (x > (a / 2.)) || (y < (a / -2.)) || (y > (a / 2.)))
  {
    cout << "The point is OUTSIDE the rectangle";
  }
  else
  {
    cout << "The point is ON the rectangle";
  }
  cout << endl;
}

int main()
{
  solution();
  
  return 0;
}