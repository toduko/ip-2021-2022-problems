/*
Да се дефинира подходяща структура Body, описваща физическо тяло със следните параметри (пренебрегваме влиянието на всички тела, освен на Земята):
- координати на центъра на тежестта на тялото в евклидова отправна система с начало в центъра на Земята;
- маса и скорост спрямо същата отправна система;
- описание (символен низ до 20 символа).
а) Да се създаде масив от 5 тела и да се въведат от стандартния вход стойности на параметрите им.
б) Да се дефинира функция void printBodies (Body bodies[], unsigned n), която по даден масив bodies от n тела извежда на стандартния изход подходящо форматирана информацията за телата в реда на срещането им в масива.
в) Да се дефинира функция Body findBody(Body bodies[], unsigned n, char type), която в даден масив bodies от n тела намира и връща тялото с:
- най-висока потенциална енергия, ако type == 'p';
- най-висока кинетична енергия, ако type == 'k';
- обща енергия (кинетична + потенциална), която е най-близка до средното аритметично на общите енергии на всички тела, при всички други стойности на type.
Ако има повече от едно тяло, отговарящо на условията, да се върне тялото с най-малък индекс в масива.
Упътване: Потенциалната енергия Ep = mgh, а кинетичната енергия Ek = (mv^2) / 2, където m е масата на тялото, g ≈ 9.8 m/s^2 е земното ускорение, h е разстоянието на тялото до Земята, а v е неговата скорост.
*/
#include <iostream>

using namespace std;

struct Body
{
  double x, y;
  double mass, vel;
  char desc[20];
} bodies[5];

void printBody(Body body)
{
  cout << "body(";
  cout << "x = " << body.x << ", ";
  cout << "y = " << body.y << ", ";
  cout << "mass = " << body.mass << ", ";
  cout << "vel = " << body.vel << ", ";
  cout << "desc = " << body.desc << ")\n";
}

void printBodies(Body bodies[], unsigned n)
{
  for (int i = 0; i < n; ++i)
  {
    cout << "bodies[" << i << "] = ";
    printBody(bodies[i]);
  }
}

#define PRECISION 0.00001

double absolute(double num)
{
  return num >= 0 ? num : -num;
}

double sqrt(double num)
{
  double x = num;
  double root;

  while (true)
  {
    root = 0.5 * (x + (num / x));

    if (absolute(root - x) < PRECISION)
      break;

    x = root;
  }

  return root;
}

#define g 9.8
#define kinetic_energy(body) (body.mass * body.vel * body.vel / 2)
#define potential_energy(body) (body.mass * g * sqrt(body.x * body.x + body.y * body.y))

double find_energy(Body body, char type)
{
  double e = kinetic_energy(body) + potential_energy(body);

  if (type == 'k')
  {
    e -= potential_energy(body);
  }
  else if (type == 'p')
  {
    e -= kinetic_energy(body);
  }

  return e;
}

Body findBody(Body bodies[], unsigned n, char type)
{
  double max = find_energy(bodies[0], type);
  int idx = 0;

  for (int i = 1; i < n; ++i)
  {
    double curr = find_energy(bodies[i], type);
    if (curr > max)
    {
      max = curr;
      idx = i;
    }
  }

  cout << "Max " << ((type == 'k') ? "kinetic" : ((type == 'p') ? "potential" : "combined"))
       << " energy: " << max << endl;
  return bodies[idx];
}

void enterData(Body bodies[], unsigned n)
{
  for (int i = 0; i < n; ++i)
  {
    cout << "Body #" << i + 1 << ":\n";
    cout << "X: ";
    cin >> bodies[i].x;
    cout << "Y: ";
    cin >> bodies[i].y;
    cout << "Mass: ";
    cin >> bodies[i].mass;
    cout << "Velocity: ";
    cin >> bodies[i].vel;
    cout << "Description (<=20 characters):";
    cin >> bodies[i].desc;
  }
}

int main()
{
  enterData(bodies, 5);
  printBodies(bodies, 5);
  findBody(bodies, 5, 'k');
  findBody(bodies, 5, 'p');
  findBody(bodies, 5, '3');

  return 0;
}