/*
Напишете функция, която намира разстоянието между две точки по подадени координати в декартова координатна система.
*/

#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void solution()
{
    double x1, y1;
    cin >> x1 >> y1;
    double x2, y2;
    cin >> x2 >> y2;

    cout << distance(x1, y1, x2, y2) << endl;
}

int main()
{
    solution();

    return 0;
}