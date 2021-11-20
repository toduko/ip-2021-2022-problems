#include <iostream>
#include <cmath>

using namespace std;

// доц. д-р Нора Ангелова позволи използването на define вместо const

#define EPSILON 0.0001
#define PI 3.14159265

bool is_less(double a, double b)
{
  return ((a - b) < -EPSILON);
}

bool is_greater(double a, double b)
{
  return ((a - b) > EPSILON);
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

#define TYPE_NULL 0
#define TYPE_BLUEBERRY 1
#define TYPE_PEACH 2
#define TYPE_ROSE_HIP 3

bool is_digit(char c)
{
  return ((c >= '0') && (c <= '9'));
}

unsigned char read_batch_and_get_type()
{
  char buffer;
  unsigned short int type_code = 0;

  for (int i = 0; i < 3; ++i)
  {
    cin >> buffer;
    if (!is_digit(buffer)) // only check first 3 digits for type
    {
      return TYPE_NULL;
    }
  }

  for (int i = 0; i < 4; ++i)
  {
    cin >> buffer;
    if (is_digit(buffer))
    {
      type_code = (type_code * 10) + (buffer - 48);
    }
    else
    {
      return TYPE_NULL;
    }
  }

  cin >> buffer;
  if (!is_digit(buffer)) // only check last digit for type
  {
    return TYPE_NULL;
  }

  if (type_code % 7 == 0)
  {
    return TYPE_BLUEBERRY;
  }
  else if (type_code % 13 == 0)
  {
    return TYPE_PEACH;
  }
  else if (type_code % 17 == 0)
  {
    return TYPE_ROSE_HIP;
  }
  else
  {
    return TYPE_NULL;
  }
}

void read_positive_n(int &n)
{
  do
  {
    cin >> n;
  } while (n < 1);
}

void task_2()
{
  int n, blueberry_count = 0, peach_count = 0, rose_hip_count = 0;
  read_positive_n(n);

  const int NUM_CODES = n / 8;
  const int INVALID_LETTERS = n % 8;

  for (int i = 0; i < NUM_CODES; ++i)
  {
    const unsigned char type = read_batch_and_get_type();
    blueberry_count += (type == TYPE_BLUEBERRY);
    peach_count += (type == TYPE_PEACH);
    rose_hip_count += (type == TYPE_ROSE_HIP);
  }
  for (int i = 0; i < INVALID_LETTERS; ++i)
  {
    char a;
    cin >> a;
  }

  cout << "Blueberry jam: " << blueberry_count << endl;
  cout << "Peach jam: " << peach_count << endl;
  cout << "Rose hip jam: " << rose_hip_count << endl;
}

bool is_interesting(int num)
{
  while (num / 10)
  {
    if (!((num % 10) & 1) ^ (((num / 10) % 10) & 1))
    {
      return false;
    }
    num /= 10;
  }

  return true;
}

void task_3()
{
  int a, b, interesting_sum = 0;
  cin >> a >> b;

  if (a > b) // swap
  {
    a ^= b;
    b ^= a;
    a ^= b;
  }

  for (int i = a; i <= b; ++i)
  {
    interesting_sum += (is_interesting(i) ? i : 0);
  }

  cout << interesting_sum << endl;
}

bool has_repeating_digits(int num)
{
  unsigned short int flags;

  while (num)
  {
    int l_digit = num % 10;

    if (!(flags & (1 << l_digit)))
    {
      flags |= 1 << l_digit;
    }
    else
    {
      return true;
    }

    num /= 10;
  }

  return false;
}

void read_4_digit_num(unsigned int &num, bool should_be_unique)
{
  do
  {
    if (should_be_unique)
    {
      cout << "Enter secret number (must be unique and 4 digits): ";
    }
    else
    {
      cout << "Enter guess (must be 4 digits): ";
    }
    cin >> num;
  } while (((num < 1000) || (num > 9999)) || (should_be_unique && has_repeating_digits(num)));
}

unsigned int get_bulls(unsigned int guess, unsigned int answer)
{
  unsigned int bulls = 0;
  while (guess)
  {
    bulls += ((guess % 10) == (answer % 10));

    guess /= 10;
    answer /= 10;
  }

  return bulls;
}

bool contains_digit(unsigned int num, unsigned int digit)
{
  while (num)
  {
    if ((num % 10) == digit)
    {
      return true;
    }

    num /= 10;
  }

  return false;
}

unsigned int get_cows(unsigned int guess, unsigned int answer, unsigned int bulls)
{
  unsigned int cows = 0;
  while (guess)
  {
    cows += contains_digit(answer, guess % 10);

    guess /= 10;
  }

  cows -= bulls;

  return cows;
}

bool make_guess(unsigned int &guess, unsigned int answer) // returns true if number is guessed correctly
{
  read_4_digit_num(guess, false);

  if (guess == answer)
  {
    return true;
  }

  unsigned int bulls = get_bulls(guess, answer);
  unsigned int cows = get_cows(guess, answer, bulls);

  cout << bulls << " bulls\n";
  cout << cows << " cows\n";

  return false;
}

#define NUM_TRIES 4

void task_4()
{
  unsigned int num_to_guess, guess;
  read_4_digit_num(num_to_guess, true);

  cout << "You have " << NUM_TRIES << " tries.\n";

  for (int i = 0; i <= NUM_TRIES; ++i)
  {
    if (i == NUM_TRIES)
    {
      cout << "Game over!\n";
      break;
    }
    if (make_guess(guess, num_to_guess))
    {
      cout << "You won!\n";
      break;
    }
    else
    {
      cout << NUM_TRIES - i - 1 << " tries left.\n";
    }
  }
}

int main()
{
  // task_0();
  // task_1();
  // task_2();
  // task_3();
  task_4();

  return 0;
}