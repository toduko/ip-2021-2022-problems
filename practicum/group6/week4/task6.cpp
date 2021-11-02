/*
Напишете функция, която приема цяло число и връща факториела му.
*/

#include <iostream>

using namespace std;

unsigned int fact(int n)
{
    unsigned int result = 1;

    if (n > 1)
    {
        for (int i = 2; i <= n; ++i)
        {
            result *= i;
        }
    }
    return result;
}

void solution()
{
    int n;
    cin >> n;

    cout << fact(n) << endl;
}

int main()
{
    solution();

    return 0;
}