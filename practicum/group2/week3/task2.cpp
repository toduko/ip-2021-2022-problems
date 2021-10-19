/*
По подадена точка, да се определи в кой квадрант е тя.
*/

#include <iostream>

using namespace std;

void solution()
{
  double x, y;
  cin >> x >> y;

  if ((x > 0) && (y > 0))
  {
    cout << "First quadrant";
  }
  else if ((x < 0) && (y > 0))
  {
    cout << "Second quadrant";
  } else if ((x < 0) && (y < 0))
  {
    cout << "Third quadrant";
  } else if ((x > 0) && (y < 0))
  {
    cout << "Forth quadrant";
  } else {
    cout << "Point lies on on one of the axis";
  }
  cout << endl;
}

int main()
{
  solution();
  
  return 0;
}