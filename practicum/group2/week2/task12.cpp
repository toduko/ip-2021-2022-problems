/*
Прочетете координати на 5 точки - естествени числа в интервала [0; 100].
Изведете радиуса на минимална покриваща окръжност, чийто център е с координати (0,0).
*/

#include <iostream>

using namespace std;

double absolute(double num) { return (num > 0 ? num : -num); }

#define TOLERANCE 0.00001
double sqrt(double number)
{
  double x = number;
  double root;

  while (1)
  {
    root = 0.5 * (x + (number / x));
    if (absolute(root - x) < TOLERANCE)
      break;

    x = root;
  }

  return root;
}

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