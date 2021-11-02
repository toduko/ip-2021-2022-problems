/*
Напишете функция, която приема за аргументи х и n като n e цяло число и връща х на степен n.
Не можем да използваме функция pow.
*/

#include <iostream>

using namespace std;

unsigned int pow(unsigned int a, unsigned int b)
{
    unsigned int result = 1;

    for (int i = 0; i < b; ++i)
    {
        result *= a;
    }

    return result;
}

void solution()
{
    unsigned int a, n;
    cin >> a >> n;

    cout << pow(a, n) << endl;
}

int main()
{
    solution();
    
    return 0;
}