/*
Да се дефинира подходяща структура Planet, описваща планетно тяло в система с една звезда със следните параметри (пренебрегваме влиянието на всички други тела, освен на звездата):
- координати на центъра на тежестта на тялото в евклидова отправна система с начало в центъра на звездата на системата;
- диаметър;
- наличие на живот (да или не);
- описание (символен низ до 20 символа).
а) Да се създаде масив от 5 планети и да се въведат от стандартния вход стойности на параметрите им;
б) Да се дефинира функция void printPlanets (Planet planets[], unsigned n), която по даден масив planets от n планетни тела извежда на стандартния изход подходящо форматирана информацията за планетите в реда на срещането им в масива.
в) Да се дефинира функция Planet findPlanet (Planet planets[], unsigned n, char type), която в даден масив planets от n планетни тела намира и връща планетата, която:
- е най-близко до звездата на системата, ако type == 's';
- е най-малката по диаметър и с наличие на живот, ако type == 'd', като ако на никоя от планетите в системата няма живот, да се върне планетата с най-малък диаметър;
- е с обем най-близък до средно аритметичното на обемите на всички планети, за всички други стойности на type.
Упътване: Допускаме, че планетите са сферични, обемът на сфера се намира по формулата V = (4 * PI * r^3) / 3
*/
#include <iostream>
#include <cmath>

using namespace std;

struct Planet
{
  double x, y;
  double diameter;
  bool signs_of_life;
  char desc[20];
} planets[5];

void printPlanet(Planet planet)
{
  cout << "planet(";
  cout << "x = " << planet.x << ", ";
  cout << "y = " << planet.y << ", ";
  cout << "diameter = " << planet.diameter << ", ";
  cout << "signs of life = " << planet.signs_of_life << ", ";
  cout << "desc = " << planet.desc << ")\n";
}

void printPlanets(Planet planets[], unsigned n)
{
  for (int i = 0; i < n; ++i)
  {
    cout << "planets[" << i << "] = ";
    printPlanet(planets[i]);
  }
}

void enterData(Planet planets[], unsigned n)
{
  for (int i = 0; i < n; ++i)
  {
    cout << "Planet #" << i + 1 << ":\n";
    cout << "X: ";
    cin >> planets[i].x;
    cout << "Y: ";
    cin >> planets[i].y;
    cout << "Diameter: ";
    cin >> planets[i].diameter;
    cout << "Signs of life: ";
    cin >> planets[i].signs_of_life;
    cout << "Description (<=20 characters): ";
    cin >> planets[i].desc;
  }
}

#define PI 3.14
#define find_distance(planet) (sqrt(planet.x * planet.x + planet.y * planet.y))
#define get_volume(planet) ((4 * PI * pow(planet.diameter / 2, 3)) / 3)

Planet findPlanet(Planet planets[], unsigned n, char type)
{
  unsigned idx;
  if (type == 's')
  {
    double min_distance = find_distance(planets[0]);
    for (int i = 1; i < n; ++i)
    {
      double curr_distance = find_distance(planets[i]);
      if (curr_distance < min_distance)
      {
        min_distance = curr_distance;
        idx = i;
      }
    }
    cout << "Minimum distance to star in the system: " << min_distance << endl;
  }
  else if (type == 'd')
  {
    double min_diameter = planets[0].diameter;
    for (int i = 1; i < n; ++i)
    {
      if ((planets[idx].signs_of_life < planets[i].signs_of_life) || ((planets[idx].signs_of_life == planets[i].signs_of_life) && (planets[i].diameter < min_diameter)))
      {
        min_diameter = planets[i].diameter;
        idx = i;
      }
    }
    cout << "Minimum diameter (with/without signs of life): " << min_diameter << endl;
  }
  else
  {
    double avg = 0;

    for (int i = 0; i < n; ++i)
    {
      avg += get_volume(planets[i]);
    }

    avg /= n;

    double min_volume = get_volume(planets[0]);

    for (int i = 1; i < n; ++i)
    {
      double curr_volume = get_volume(planets[i]);
      if (abs(avg - min_volume) > abs(avg - curr_volume))
      {
        min_volume = curr_volume;
        idx = i;
      }
    }

    cout << "Volume closest to average: " << min_volume << endl;
  }

  return planets[idx];
}

int main()
{
  enterData(planets, 5);
  printPlanets(planets, 5);
  findPlanet(planets, 5, 's');
  findPlanet(planets, 5, 'd');
  findPlanet(planets, 5, 'a');

  return 0;
}