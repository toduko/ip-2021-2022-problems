/*
Прочетете координати на 5 точки - естествени числа в интервала [0; 100].
Изведете радиуса на минимална покриваща окръжност, чийто център е с координати (0,0).
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  unsigned int x, y;
  double max_distance;
  double distance;
  cin >> x >> y;
  if (x > 100 || y > 100) {
    cout << "Coordinates are outside of range - [0; 100].\n";
    return;
  }
  max_distance = distance = sqrt(x * x + y * y);

  cin >> x >> y;
  if (x > 100 || y > 100) {
    cout << "Coordinates are outside of range - [0; 100].\n";
    return;
  }
  distance = sqrt(x * x + y * y);
  max_distance = distance > max_distance ? distance : max_distance;

  cin >> x >> y;
  if (x > 100 || y > 100) {
    cout << "Coordinates are outside of range - [0; 100].\n";
    return;
  }
  distance = sqrt(x * x + y * y);
  max_distance = distance > max_distance ? distance : max_distance;

  cin >> x >> y;
  if (x > 100 || y > 100) {
    cout << "Coordinates are outside of range - [0; 100].\n";
    return;
  }
  distance = sqrt(x * x + y * y);
  max_distance = distance > max_distance ? distance : max_distance;

  cin >> x >> y;
  if (x > 100 || y > 100) {
    cout << "Coordinates are outside of range - [0; 100].\n";
    return;
  }
  distance = sqrt(x * x + y * y);
  max_distance = distance > max_distance ? distance : max_distance;

  cout << "r = "<< max_distance << endl;
}

int main()
{
  solution();

  return 0;
}