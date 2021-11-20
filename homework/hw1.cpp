#include <iostream>
#include <cmath>

using namespace std;

// доц. д-р Нора Ангелова позволи използването на define вместо const

#define EPSILON 0.0001
#define PI 3.14159265

double absolute(double a)
{
  return (a >= 0 ? a : -a);
}

bool are_equal(double a, double b)
{
  return absolute(a - b) < EPSILON;
}

bool is_less(double a, double b)
{
  return ((a - b) < -EPSILON);
}

bool less_or_equals(double a, double b)
{
  return (are_equal(a, b) || is_less(a, b));
}

bool is_greater(double a, double b)
{
  return ((a - b) > EPSILON);
}

bool greater_or_equals(double a, double b)
{
  return (are_equal(a, b) || is_greater(a, b));
}

bool is_between(double a, double lower_bound, double upper_bound)
{
  return (is_greater(a, lower_bound) && is_less(a, upper_bound));
}

double euclidian_distance(double x1, double y1, double x2, double y2)
{
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

bool is_in_square(double x, double y, double square_x_min, double square_y_min, double square_x_max, double square_y_max)
{
  return (is_between(x, square_x_min, square_x_max) && is_between(y, square_y_min, square_y_max));
}

double sine_of_point(double x, double y)
{
  double hypotenuse = euclidian_distance(x, y, 0, 0);
  double cathetus = y;

  return cathetus / hypotenuse;
}

void task_0()
{
  double x, y;
  cin >> x >> y;

  if (is_in_square(x, y, -2, -7, 2, -6))
  {
    cout << "gray area\n";
  }
  else
  {
    const double hypotenuse = euclidian_distance(x, y, 0, 0);

    if (is_less(hypotenuse, 4))
    {
      const double sine = y / hypotenuse;

      const double SIN_45 = sin(PI / 4);
      const double SIN_90 = sin(PI / 2);

      const double SQUARE_UPPER_COORD = SIN_45 * 4; // sin45 degrees = (SQUARE_UPPER_COORD) / radius = cos45 degrees
      if (is_between(x, -SQUARE_UPPER_COORD, SQUARE_UPPER_COORD))
      {
        if (is_greater(x, 0))
        {
          if (is_between(sine, -SIN_90, SIN_45))
          {
            cout << "yellow area\n";
          }
          else if (is_between(sine, SIN_45, SIN_90))
          {
            cout << "green area\n";
          }
          else
          {
            cout << "nowhere\n";
          }
        }
        else
        {
          if (is_between(sine, SIN_45, SIN_90))
          {
            cout << "red area\n";
          }
          else if (is_between(sine, -SIN_45, SIN_45))
          {
            cout << "pink area\n";
          }
          else if (is_between(sine, -SIN_90, -SIN_45))
          {
            cout << "blue area\n";
          }
          else
          {
            cout << "nowhere\n";
          }
        }
      }
      else if (is_greater(x, SQUARE_UPPER_COORD))
      {
        cout << "purple area\n";
      }
      else
      {
        cout << "nowhere\n";
      }
    }
    else
    {
      cout << "nowhere\n";
    }
  }
}

void task_1()
{
  int x;
  cin >> x;

  for (int i = 2; i <= 35; ++i)
  {
    if (x & 1)
    {
      x = 3 * x + 1;
    }
    else
    {
      x /= 2;
    }
  }

  cout << "f_35(x) = " << x << endl;
}

int main()
{
  // task_0();
  task_1();

  return 0;
}