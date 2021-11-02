/*
Напишете функция, която намира обиколката на триъгълник определен по подадени три точки.
*/

#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double perimeter(double ax, double ay, double bx, double by, double cx, double cy)
{
    return (distance(ax, ay, bx, by) + distance(bx, by, cx, cy) + distance(ax, ay, cx, cy));
}

void solution()
{
    double ax, ay;
    cin >> ax >> ay;
    double bx, by;
    cin >> bx >> by;
    double cx, cy;
    cin >> cx >> cy;

    cout << perimeter(ax, ay, bx, by, cx, cy) << endl;
}

int main()
{
    solution();

    return 0;
}