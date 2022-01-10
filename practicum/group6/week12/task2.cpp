/*
Да се напише рекурсивна функция, която повдига число на степен.
*/

#include <iostream>

using namespace std;

unsigned int power(const unsigned int a, const unsigned int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}

void solution()
{
    unsigned int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
}

int main()
{
    solution();

    return 0;
}